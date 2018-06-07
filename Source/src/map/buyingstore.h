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

#ifndef MAP_BUYINGSTORE_H
#define MAP_BUYINGSTORE_H

#include "common/cbasetypes.h"
#include "common/db.h"
#include "common/mmo.h" // MAX_SLOTS

struct map_session_data;

/**
 * Declarations
 **/
struct s_search_store_search;

/**
 * Defines
 **/
#define MAX_BUYINGSTORE_SLOTS 5

/// constants (client-side restrictions)
#define BUYINGSTORE_MAX_PRICE 99990000
#define BUYINGSTORE_MAX_AMOUNT 9999

/**
 * Enumerations
 **/
/// failure constants for clif functions
enum e_buyingstore_failure {
	BUYINGSTORE_CREATE               = 1,  // "Failed to open buying store."
	BUYINGSTORE_CREATE_OVERWEIGHT    = 2,  // "Total amount of then possessed items exceeds the weight limit by %d. Please re-enter."
	BUYINGSTORE_TRADE_BUYER_ZENY     = 3,  // "All items within the buy limit were purchased."
	BUYINGSTORE_TRADE_BUYER_NO_ITEMS = 4,  // "All items were purchased."
	BUYINGSTORE_TRADE_SELLER_FAILED  = 5,  // "The deal has failed."
	BUYINGSTORE_TRADE_SELLER_COUNT   = 6,  // "The trade failed, because the entered amount of item %s is higher, than the buyer is willing to buy."
	BUYINGSTORE_TRADE_SELLER_ZENY    = 7,  // "The trade failed, because the buyer is lacking required balance."
	BUYINGSTORE_CREATE_NO_INFO       = 8,  // "No sale (purchase) information available."
};

/* Structures */

/** Buyingstore item entry */
struct s_buyingstore_item {
	int price;
	unsigned short amount;
	unsigned short nameid;
};
/** Buyingstore item list */
VECTOR_STRUCT_DECL(buyingstore_itemlist, struct s_buyingstore_item);

/** Buyingstore item used in trade requests */
struct buyingstore_trade_item {
	int nameid;
	int16 index;
	int16 amount;
};
/** Buyingstore item list used in trade requests */
VECTOR_STRUCT_DECL(buyingstore_trade_itemlist, struct buyingstore_trade_item);


struct s_buyingstore {
	struct s_buyingstore_item items[MAX_BUYINGSTORE_SLOTS];
	int zenylimit;
	unsigned char slots;
};

/**
 * Interface
 **/
struct buyingstore_interface {
	unsigned int nextid;
	/* */
	bool (*setup) (struct map_session_data* sd, unsigned char slots);
	void (*create) (struct map_session_data *sd, int zenylimit, unsigned char result, const char *storename, const struct buyingstore_itemlist *itemlist);
	void (*close) (struct map_session_data* sd);
	void (*open) (struct map_session_data* sd, int account_id);
	void (*trade) (struct map_session_data *sd, int account_id, unsigned int buyer_id, const struct buyingstore_trade_itemlist *itemlist);
	bool (*search) (struct map_session_data* sd, unsigned short nameid);
	bool (*searchall) (const struct map_session_data *sd, const struct s_search_store_search *query);
	unsigned int (*getuid) (void);
};

void buyingstore_defaults (void);
extern struct buyingstore_interface *buyingstore;

#endif  // MAP_BUYINGSTORE_H
