/* -*-pgsql-c-*- */
/*
 *
 * $Header$
 *
 * pgpool: a language independent connection pool server for PostgreSQL
 * written by Tatsuo Ishii
 *
 * Copyright (c) 2003-2015	PgPool Global Development Group
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose and without fee is hereby
 * granted, provided that the above copyright notice appear in all
 * copies and that both that copyright notice and this permission
 * notice appear in supporting documentation, and that the name of the
 * author not be used in advertising or publicity pertaining to
 * distribution of the software without specific, written prior
 * permission. The author makes no representations about the
 * suitability of this software for any purpose.  It is provided "as
 * is" without express or implied warranty.
 *
 *
 */

#ifndef WD_UTILS_H
#define WD_UTILS_H

#include "parser/pg_list.h"

#define WD_NG (0)
#define WD_OK (1)
#define WD_MAX_PACKET_STRING (256)

/* wd_utils.c*/
extern int wd_chk_sticky(void);
extern void wd_check_network_command_configurations(void);
extern int watchdog_thread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern char *string_replace(const char *string, const char *pattern, const char *replacement);
extern void wd_calc_hash(const char *str, int len, char *buf);

/* wd_escalation.c */
extern pid_t fork_escalation_process(void);
extern pid_t fork_plunging_process(void);

/* wd_ping.c */
extern int wd_is_upper_ok(char * server_list);
extern int wd_is_unused_ip(char * ip);

/* wd_if.c */
extern List* get_all_local_ips(void);
extern int wd_IP_up(void);
extern int wd_IP_down(void);
extern int wd_get_cmd(char * buf, char * cmd);
extern int create_monitoring_socket(void);
extern bool read_interface_change_event(int sock, char** ip_address, char** interface, bool* address_deleted);

#endif
