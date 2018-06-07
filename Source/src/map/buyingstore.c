/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|      Source Script                             |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#define MAIN_CORE

#include "buyingstore.h" // struct s_buyingstore

#include "map/atcommand.h" // msg_txt
#include "map/battle.h" // battle_config.*
#include "map/chrif.h"
#include "map/clif.h" // clif-"buyingstore_*
#include "map/log.h" // log_pick_pc, log_zeny
#include "map/pc.h" // struct map_session_data
#include "common/cbasetypes.h"
#include "common/db.h" // ARR_FIND
#include "common/nullpo.h" // nullpo_*
#include "common/showmsg.h" // ShowWarning
#include "common/socket.h" // RBUF*
#include "common/strlib.h" // safestrncpy

struct buyingstore_interface buyingstore_s;
struct buyingstore_interface *buyingstore;

/// Returns unique buying store id
unsigned int buyingstore_getuid(void) {
	return buyingstore->nextid++;
}

bool buyingstore_setup(struct map_session_data* sd, unsigned char slots)
{
	nullpo_retr(false, sd);
	if( !battle_config.feature_buying_store || sd->state.vending || sd->state.buyingstore || sd->state.trading || slots == 0 )
	{
		return false;
	}

	if(pc_ismuted(&sd->sc, MANNER_NOROOM))
	{// custom: mute limitation
		return false;
	}

	if( map->list[sd->bl.m].flag.novending ) {
		// custom: no vending maps
		clif->message(sd->fd, msg_txt(276)); // "You can't open a shop on this map"
		return false;
	}

	if (map->getcell(sd->bl.m, &sd->bl, sd->bl.x, sd->bl.y, CELL_CHKNOVENDING)) {
		// custom: no vending cells
		clif->message(sd->fd, msg_txt(204)); // "You can't open a shop on this cell."
		return false;
	}

	if( slots > MAX_BUYINGSTORE_SLOTS )
	{
		ShowWarning("buyingstore_setup: %d espacos requisitados, mas o servidor suporta apenas %d espacos.\n", (int)slots, MAX_BUYINGSTORE_SLOTS);
		slots = MAX_BUYINGSTORE_SLOTS;
	}

	sd->buyingstore.slots = slots;
	clif->buyingstore_open(sd);

	return true;
}

void buyingstore_create(struct map_session_data *sd, int zenylimit, unsigned char result, const char *storename, const struct buyingstore_itemlist *itemlist)
{
	int i;
	unsigned int weight;

	nullpo_retv(sd);
	nullpo_retv(itemlist);

	if (!result || VECTOR_LENGTH(*itemlist) == 0) {
		// canceled, or no items
		return;
	}

	if( !battle_config.feature_buying_store || pc_istrading(sd) || sd->buyingstore.slots == 0 || VECTOR_LENGTH(*itemlist) > sd->buyingstore.slots || zenylimit <= 0 || zenylimit > sd->status.zeny || !storename[0]) {
		// disabled or invalid input
		sd->buyingstore.slots = 0;
		clif->buyingstore_open_failed(sd, BUYINGSTORE_CREATE, 0);
		return;
	}

	if( !pc_can_give_items(sd) )
	{// custom: GM is not allowed to buy (give zeny)
		sd->buyingstore.slots = 0;
		clif->message(sd->fd, msg_txt(246)); // Your GM level doesn't authorize you to perform this action.
		clif->buyingstore_open_failed(sd, BUYINGSTORE_CREATE, 0);
		return;
	}

	if(pc_ismuted(&sd->sc, MANNER_NOROOM))
	{// custom: mute limitation
		return;
	}

	if( map->list[sd->bl.m].flag.novending ) {
		// custom: no vending maps
		clif->message(sd->fd, msg_txt(276)); // "You can't open a shop on this map"
		return;
	}

	if (map->getcell(sd->bl.m, &sd->bl, sd->bl.x, sd->bl.y, CELL_CHKNOVENDING)) {
		// custom: no vending cells
		clif->message(sd->fd, msg_txt(204)); // "You can't open a shop on this cell."
		return;
	}

	weight = sd->weight;

	// check item list
	for (i = 0; i < VECTOR_LENGTH(*itemlist); i++) {
		const struct s_buyingstore_item *entry = &VECTOR_INDEX(*itemlist, i);
		int idx;
		struct item_data* id;

		// invalid input
		if ((id = itemdb->exists(entry->nameid) ) == NULL || entry->amount == 0) {
			break;
		}

		// invalid price: unlike vending, items cannot be bought at 0 Zeny
		if (entry->price <= 0 || entry->price > BUYINGSTORE_MAX_PRICE) {
			break;
		}

		// restrictions: allowed, no character-bound items and at least one must be owned
		if (!id->flag.buyingstore || !itemdb->cantrade_sub(id, pc_get_group_level(sd), pc_get_group_level(sd))
		 || (idx = pc->search_inventory(sd, entry->nameid)) == INDEX_NOT_FOUND
		 ) {
			break;
		}

		// too many items of same kind
		if (sd->status.inventory[idx].amount + entry->amount > BUYINGSTORE_MAX_AMOUNT) {
			break;
		}

		if (i > 0) {
			int j;
			// duplicate check. as the client does this too, only malicious intent should be caught here
			ARR_FIND(0, i, j, sd->buyingstore.items[j].nameid == entry->nameid);
			if (j != i) {
				// duplicate
				ShowWarning("buyingstore_create: Encontrado item duplicado na lista de compra (nameid=%hu, amount=%hu, account_id=%d, char_id=%d).\n",
						entry->nameid, entry->amount, sd->status.account_id, sd->status.char_id);
				break;
			}
		}

		weight += id->weight * entry->amount;
		sd->buyingstore.items[i] = *entry;
	}

	// invalid item/amount/price
	if (i != VECTOR_LENGTH(*itemlist)) {
		sd->buyingstore.slots = 0;
		clif->buyingstore_open_failed(sd, BUYINGSTORE_CREATE, 0);
		return;
	}

	if( (sd->max_weight*90)/100 < weight )
	{// not able to carry all wanted items without getting overweight (90%)
		sd->buyingstore.slots = 0;
		clif->buyingstore_open_failed(sd, BUYINGSTORE_CREATE_OVERWEIGHT, weight);
		return;
	}

	// success
	sd->state.buyingstore = true;
	sd->buyer_id = buyingstore->getuid();
	sd->buyingstore.zenylimit = zenylimit;
	sd->buyingstore.slots = i;  // store actual amount of items
	safestrncpy(sd->message, storename, sizeof(sd->message));
	clif->buyingstore_myitemlist(sd);
	clif->buyingstore_entry(sd);
}

void buyingstore_close(struct map_session_data* sd)
{
	nullpo_retv(sd);
	if (sd->state.buyingstore)
	{
		// invalidate data
		sd->state.buyingstore = false;
		memset(&sd->buyingstore, 0, sizeof(sd->buyingstore));

		// notify other players
		clif->buyingstore_disappear_entry(sd);
	}
}

void buyingstore_open(struct map_session_data* sd, int account_id)
{
	struct map_session_data* pl_sd;

	nullpo_retv(sd);
	if( !battle_config.feature_buying_store || pc_istrading(sd) )
	{// not allowed to sell
		return;
	}

	if( !pc_can_give_items(sd) )
	{// custom: GM is not allowed to sell
		clif->message(sd->fd, msg_txt(246)); // Your GM level doesn't authorize you to perform this action.
		return;
	}

	if( ( pl_sd = map->id2sd(account_id) ) == NULL || !pl_sd->state.buyingstore ) {
		// not online or not buying
		return;
	}

	if( !searchstore->queryremote(sd, account_id) && ( sd->bl.m != pl_sd->bl.m || !check_distance_bl(&sd->bl, &pl_sd->bl, AREA_SIZE) ) )
	{// out of view range
		return;
	}

	// success
	clif->buyingstore_itemlist(sd, pl_sd);
}


void buyingstore_trade(struct map_session_data* sd, int account_id, unsigned int buyer_id, const struct buyingstore_trade_itemlist *itemlist)
{
	int zeny = 0;
	int i;
	unsigned int weight;
	struct map_session_data* pl_sd;

	nullpo_retv(sd);
	nullpo_retv(itemlist);

	// nothing to do
	if (VECTOR_LENGTH(*itemlist) == 0) {
		return;
	}

	// not allowed to sell
	if (!battle_config.feature_buying_store || pc_istrading(sd)) {
		clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, 0);
		return;
	}

	// custom: GM is not allowed to sell
	if (!pc_can_give_items(sd)) {
		clif->message(sd->fd, msg_txt(246)); // Your GM level doesn't authorize you to perform this action.
		clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, 0);
		return;
	}

	if (( pl_sd = map->id2sd(account_id) ) == NULL || !pl_sd->state.buyingstore || pl_sd->buyer_id != buyer_id) {
		// not online, not buying or not same store
		clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, 0);
		return;
	}

	// out of view range
	if (!searchstore->queryremote(sd, account_id) && ( sd->bl.m != pl_sd->bl.m || !check_distance_bl(&sd->bl, &pl_sd->bl, AREA_SIZE))) {
		clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, 0);
		return;
	}

	searchstore->clearremote(sd);

	// buyer lost zeny in the mean time? fix the limit
	if (pl_sd->status.zeny < pl_sd->buyingstore.zenylimit) {
		pl_sd->buyingstore.zenylimit = pl_sd->status.zeny;
	}
	weight = pl_sd->weight;

	// check item list
	for (i = 0; i < VECTOR_LENGTH(*itemlist); i++) {
		const struct buyingstore_trade_item *entry = &VECTOR_INDEX(*itemlist, i);
		int j, listidx;

		if (i > 0) {
			// duplicate check. as the client does this too, only malicious intent should be caught here
			ARR_FIND(0, i, j, VECTOR_INDEX(*itemlist, j).index == entry->index);
			if (j != i) {
				// duplicate
				ShowWarning("buyingstore_trade: Encontrado item duplicado na lista de venda (prevnameid=%d, prevamount=%hu, nameid=%d, amount=%hu, account_id=%d, char_id=%d).\n",
					VECTOR_INDEX(*itemlist, j).nameid, VECTOR_INDEX(*itemlist, j).amount, entry->nameid, entry->amount, sd->status.account_id, sd->status.char_id);
				clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
				return;
			}
		}

		// invalid input
		if (entry->index < 0 || entry->index >= ARRAYLENGTH(sd->status.inventory)
		 || sd->inventory_data[entry->index] == NULL
		 || sd->status.inventory[entry->index].nameid != entry->nameid || sd->status.inventory[entry->index].amount < entry->amount) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}

		// non-tradable item
		if (sd->status.inventory[entry->index].expire_time || (sd->status.inventory[entry->index].bound && !pc_can_give_bound_items(sd))
		 || !itemdb_cantrade(&sd->status.inventory[entry->index], pc_get_group_level(sd), pc_get_group_level(pl_sd))
		) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}

		// non-tradable item
		ARR_FIND(0, MAX_SLOTS, j, sd->status.inventory[entry->index].card[j] != 0);
		if (j != MAX_SLOTS) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}

		// there is no such item or the buyer has already bought all of them
		ARR_FIND(0, pl_sd->buyingstore.slots, listidx, pl_sd->buyingstore.items[listidx].nameid == entry->nameid);
		if (listidx == pl_sd->buyingstore.slots || pl_sd->buyingstore.items[listidx].amount == 0) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}

		// buyer does not need that much of the item
		if (pl_sd->buyingstore.items[listidx].amount < entry->amount) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_COUNT, entry->nameid);
			return;
		}

		// buyer does not have enough space for this item
		if (pc->checkadditem(pl_sd, entry->nameid, entry->amount) == ADDITEM_OVERAMOUNT) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}

		// normally this is not supposed to happen, as the total weight is
		// checked upon creation, but the buyer could have gained items
		if (entry->amount * (unsigned int)sd->inventory_data[entry->index]->weight > pl_sd->max_weight-weight ) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_FAILED, entry->nameid);
			return;
		}
		weight += entry->amount * sd->inventory_data[entry->index]->weight;

		// buyer does not have enough zeny
		if (entry->amount * pl_sd->buyingstore.items[listidx].price > pl_sd->buyingstore.zenylimit-zeny) {
			clif->buyingstore_trade_failed_seller(sd, BUYINGSTORE_TRADE_SELLER_ZENY, entry->nameid);
			return;
		}
		zeny += entry->amount * pl_sd->buyingstore.items[listidx].price;
	}

	// process item list
	for (i = 0; i < VECTOR_LENGTH(*itemlist); i++) {
		const struct buyingstore_trade_item *entry = &VECTOR_INDEX(*itemlist, i);
		int listidx;
		ARR_FIND(0, pl_sd->buyingstore.slots, listidx, pl_sd->buyingstore.items[listidx].nameid == entry->nameid);
		zeny = entry->amount * pl_sd->buyingstore.items[listidx].price;

		// move item
		pc->additem(pl_sd, &sd->status.inventory[entry->index], entry->amount, LOG_TYPE_BUYING_STORE);
		pc->delitem(sd, entry->index, entry->amount, 1, DELITEM_NORMAL, LOG_TYPE_BUYING_STORE);
		pl_sd->buyingstore.items[listidx].amount -= entry->amount;

		// pay up
		pc->payzeny(pl_sd, zeny, LOG_TYPE_BUYING_STORE, sd);
		pc->getzeny(sd, zeny, LOG_TYPE_BUYING_STORE, pl_sd);
		pl_sd->buyingstore.zenylimit-= zeny;

		// notify clients
		clif->buyingstore_delete_item(sd, entry->index, entry->amount, pl_sd->buyingstore.items[listidx].price);
		clif->buyingstore_update_item(pl_sd, entry->nameid, entry->amount, sd->status.char_id, zeny);
	}

	if( map->save_settings&128 ) {
		chrif->save(sd, 0);
		chrif->save(pl_sd, 0);
	}

	// check whether or not there is still something to buy
	ARR_FIND( 0, pl_sd->buyingstore.slots, i, pl_sd->buyingstore.items[i].amount != 0 );
	if( i == pl_sd->buyingstore.slots )
	{// everything was bought
		clif->buyingstore_trade_failed_buyer(pl_sd, BUYINGSTORE_TRADE_BUYER_NO_ITEMS);
	}
	else if( pl_sd->buyingstore.zenylimit == 0 )
	{// zeny limit reached
		clif->buyingstore_trade_failed_buyer(pl_sd, BUYINGSTORE_TRADE_BUYER_ZENY);
	}
	else
	{// continue buying
		return;
	}

	// cannot continue buying
	buyingstore->close(pl_sd);

	// remove auto-trader
	if( pl_sd->state.autotrade ) {
		map->quit(pl_sd);
	}
}


/// Checks if an item is being bought in given player's buying store.
bool buyingstore_search(struct map_session_data* sd, unsigned short nameid)
{
	unsigned int i;

	nullpo_retr(false, sd);
	if (!sd->state.buyingstore)
	{// not buying
		return false;
	}

	ARR_FIND( 0, sd->buyingstore.slots, i, sd->buyingstore.items[i].nameid == nameid && sd->buyingstore.items[i].amount );
	if( i == sd->buyingstore.slots )
	{// not found
		return false;
	}

	return true;
}


/// Searches for all items in a buyingstore, that match given ids, price and possible cards.
/// @return Whether or not the search should be continued.
bool buyingstore_searchall(const struct map_session_data *sd, const struct s_search_store_search *query)
{
	int i, idx;
	const short blankslots[MAX_SLOTS] = { 0 };

	nullpo_retr(true, sd);
	nullpo_retr(true, query);

	// not buying
	if (!sd->state.buyingstore) {
		return true;
	}

	for (idx = 0; idx < VECTOR_LENGTH(query->itemlist); idx++) {
		const struct s_buyingstore_item *it;
		ARR_FIND (0, sd->buyingstore.slots, i, sd->buyingstore.items[i].nameid == VECTOR_INDEX(query->itemlist, idx) && sd->buyingstore.items[i].amount > 0);
		// not found
		if (i == sd->buyingstore.slots) {
			continue;
		}
		it = &sd->buyingstore.items[i];

		// too low price
		if (query->min_price && query->min_price > (unsigned int)it->price) {
			continue;
		}

		// too high price
		if (query->max_price && query->max_price < (unsigned int)it->price) {
			continue;
		}

		//if (VECTOR_LENGTH(query->cardlist) > 0) (void)0; // ignore cards, as there cannot be any

		// result set full
		if (!searchstore->result(query->search_sd, sd->buyer_id, sd->status.account_id, sd->message, it->nameid, it->amount, it->price, blankslots, 0)) {
			return false;
		}
	}
	return true;
}

void buyingstore_defaults(void) {
	buyingstore = &buyingstore_s;

	buyingstore->nextid = 0;
	/* */
	buyingstore->setup = buyingstore_setup;
	buyingstore->create = buyingstore_create;
	buyingstore->close = buyingstore_close;
	buyingstore->open = buyingstore_open;
	buyingstore->trade = buyingstore_trade;
	buyingstore->search = buyingstore_search;
	buyingstore->searchall = buyingstore_searchall;
	buyingstore->getuid = buyingstore_getuid;

}
