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

#ifndef MAP_DUEL_H
#define MAP_DUEL_H

#include "common/HPExport.h"

struct map_session_data;

struct duel {
	int members_count;
	int invites_count;
	int max_players_limit;
};

#define MAX_DUEL 1024

/*=====================================
* Interface : duel.h
* created by Susu
*-------------------------------------*/
struct duel_interface {

	/* vars */
	struct duel list[MAX_DUEL];
	int count;

	/* funcs */
	//Duel functions // [LuzZza]
	int (*create) (struct map_session_data* sd, const unsigned int maxpl);
	void (*invite) (const unsigned int did, struct map_session_data* sd, struct map_session_data* target_sd);
	void (*accept) (const unsigned int did, struct map_session_data* sd);
	void (*reject) (const unsigned int did, struct map_session_data* sd);
	void (*leave) (const unsigned int did, struct map_session_data* sd);
	void (*showinfo) (const unsigned int did, struct map_session_data* sd);
	int (*checktime) (struct map_session_data* sd);

	void (*init) (bool minimal);
	void (*final) (void);
};

#ifdef MAIN_CORE
void duel_defaults(void);
#endif // MAIN_CORE

HPShared struct duel_interface *duel;

#endif /* MAP_DUEL_H */
