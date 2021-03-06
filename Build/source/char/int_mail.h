/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|                                                |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Athena & Hercules                                    |
| - Copyright: Spell master (Source Mod)                            |
\*-----------------------------------------------------------------*/

#ifndef CHAR_INT_MAIL_H
#define CHAR_INT_MAIL_H

#include "config/core.h"
#include "common/cbasetypes.h"

struct item;
struct mail_data;
struct mail_message;

/**
 * inter_mail interface
 **/
struct inter_mail_interface {
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);
	int (*fromsql) (int char_id, struct mail_data* md);
	int (*savemessage) (struct mail_message* msg);
	bool (*loadmessage) (int mail_id, struct mail_message* msg);
	bool (*DeleteAttach) (int mail_id);
	void (*sendmail) (int send_id, const char* send_name, int dest_id, const char* dest_name, const char* title, const char* body, int zeny, struct item *item);
	bool (*mark_read) (int mail_id);
	bool (*get_attachment) (int char_id, int mail_id, struct mail_message *msg);
	bool (*delete) (int char_id, int mail_id);
	bool (*return_message) (int char_id, int mail_id, int *new_mail);
	bool (*send) (int account_id, struct mail_message *msg);
};

void inter_mail_defaults(void);
extern struct inter_mail_interface *inter_mail;

#endif /* CHAR_INT_MAIL_H */
