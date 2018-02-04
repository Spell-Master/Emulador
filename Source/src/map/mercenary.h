/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
+-------------------------------------------------------------------+
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef MAP_MERCENARY_H
#define MAP_MERCENARY_H

#include "map/status.h" // struct status_data, struct status_change
#include "map/unit.h" // struct unit_data
#include "common/HPExport.h"

struct map_session_data;

#define MAX_MERCENARY_CLASS 61
// number of cells that a mercenary can walk to from it's master before being warped
#define MAX_MER_DISTANCE 15

enum {
	ARCH_MERC_GUILD,
	SPEAR_MERC_GUILD,
	SWORD_MERC_GUILD,
};

/// Mercenary IDs
enum merc_id {
	MERID_MER_ARCHER01   = 6017, ///<   MER_ARCHER01 / Mina
	MERID_MER_ARCHER02   = 6018, ///<   MER_ARCHER02 / Dororu
	MERID_MER_ARCHER03   = 6019, ///<   MER_ARCHER03 / Nami
	MERID_MER_ARCHER04   = 6020, ///<   MER_ARCHER04 / Elfin
	MERID_MER_ARCHER05   = 6021, ///<   MER_ARCHER05 / Clara
	MERID_MER_ARCHER06   = 6022, ///<   MER_ARCHER06 / Dali
	MERID_MER_ARCHER07   = 6023, ///<   MER_ARCHER07 / Karaya
	MERID_MER_ARCHER08   = 6024, ///<   MER_ARCHER08 / Hiyori
	MERID_MER_ARCHER09   = 6025, ///<   MER_ARCHER09 / Kero
	MERID_MER_ARCHER10   = 6026, ///<   MER_ARCHER10 / Sukye
	MERID_MER_LANCER01   = 6027, ///<   MER_LANCER01 / Rodin
	MERID_MER_LANCER02   = 6028, ///<   MER_LANCER02 / Lancer
	MERID_MER_LANCER03   = 6029, ///<   MER_LANCER03 / Nathan
	MERID_MER_LANCER04   = 6030, ///<   MER_LANCER04 / Roan
	MERID_MER_LANCER05   = 6031, ///<   MER_LANCER05 / Orizaro
	MERID_MER_LANCER06   = 6032, ///<   MER_LANCER06 / Thyla
	MERID_MER_LANCER07   = 6033, ///<   MER_LANCER07 / Ben
	MERID_MER_LANCER08   = 6034, ///<   MER_LANCER08 / Pinaka
	MERID_MER_LANCER09   = 6035, ///<   MER_LANCER09 / Kuhlmann
	MERID_MER_LANCER10   = 6036, ///<   MER_LANCER10 / Roux
	MERID_MER_SWORDMAN01 = 6037, ///< MER_SWORDMAN01 / David
	MERID_MER_SWORDMAN02 = 6038, ///< MER_SWORDMAN02 / Ellen
	MERID_MER_SWORDMAN03 = 6039, ///< MER_SWORDMAN03 / Luise
	MERID_MER_SWORDMAN04 = 6040, ///< MER_SWORDMAN04 / Frank
	MERID_MER_SWORDMAN05 = 6041, ///< MER_SWORDMAN05 / Ryan
	MERID_MER_SWORDMAN06 = 6042, ///< MER_SWORDMAN06 / Paolo
	MERID_MER_SWORDMAN07 = 6043, ///< MER_SWORDMAN07 / Jens
	MERID_MER_SWORDMAN08 = 6044, ///< MER_SWORDMAN08 / Thierry
	MERID_MER_SWORDMAN09 = 6045, ///< MER_SWORDMAN09 / Steven
	MERID_MER_SWORDMAN10 = 6046, ///< MER_SWORDMAN10 / Wayne
};

struct s_mercenary_db {
	int class_;
	char sprite[NAME_LENGTH], name[NAME_LENGTH];
	unsigned short lv;
	short range2, range3;
	struct status_data status;
	struct view_data vd;
	struct {
		unsigned short id, lv;
	} skill[MAX_MERCSKILL];
};

struct mercenary_data {
	struct block_list bl;
	struct unit_data ud;
	struct view_data *vd;
	struct status_data base_status, battle_status;
	struct status_change sc;
	struct regen_data regen;
	struct s_mercenary_db *db;
	struct s_mercenary mercenary;
	char blockskill[MAX_SKILL_DB];

	struct map_session_data *master;
	int contract_timer;

	unsigned devotion_flag : 1;
	int64 masterteleport_timer;
};

/*=====================================
* Interface : mercenary.h
* created by Susu
*-------------------------------------*/
struct mercenary_interface {

	/* vars */

	struct s_mercenary_db *db;

	/* funcs */

	void (*init) (bool minimal);

	bool (*class) (int class_);
	struct view_data * (*get_viewdata) (int class_);

	int (*create) (struct map_session_data *sd, int class_, unsigned int lifetime);
	int (*data_received) (const struct s_mercenary *merc, bool flag);
	int (*save) (struct mercenary_data *md);

	void (*heal) (struct mercenary_data *md, int hp, int sp);
	int (*dead) (struct mercenary_data *md);

	int (*delete) (struct mercenary_data *md, int reply);
	void (*contract_stop) (struct mercenary_data *md);

	int (*get_lifetime) (struct mercenary_data *md);
	int (*get_guild) (struct mercenary_data *md);
	int (*get_faith) (struct mercenary_data *md);
	int (*set_faith) (struct mercenary_data *md, int value);
	int (*get_calls) (struct mercenary_data *md);
	int (*set_calls) (struct mercenary_data *md, int value);
	int (*kills) (struct mercenary_data *md);

	int (*checkskill) (struct mercenary_data *md, uint16 skill_id);
	int (*read_db) (void);
	int (*read_skilldb) (void);

	int (*killbonus) (struct mercenary_data *md);
	int (*search_index) (int class_);

	int (*contract_end_timer) (int tid, int64 tick, int id, intptr_t data);
	bool (*read_db_sub) (char* str[], int columns, int current);
	bool (*read_skill_db_sub) (char* str[], int columns, int current);
};

#ifdef MAIN_CORE
void mercenary_defaults(void);
#endif // MAIN_CORE

HPShared struct mercenary_interface *mercenary;

#endif /* MAP_MERCENARY_H */
