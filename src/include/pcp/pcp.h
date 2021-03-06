/*
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
 * pcp.h - master header file.
 */

#ifndef PCP_H
#define PCP_H

#include "pool_type.h"
#include "pool_config.h"


#define MAX_USER_PASSWD_LEN    128
typedef struct PCPWDNodeInfo
{
	int state;
	char nodeName[WD_MAX_HOST_NAMELEN];
	char hostName[WD_MAX_HOST_NAMELEN];		/* host name */
	int wd_port;							/* watchdog port */
	int wd_priority;						/* node priority in leader election */
	int pgpool_port;						/* pgpool port */
	char delegate_ip[WD_MAX_HOST_NAMELEN];	/* delegate IP */
	int	id;
}PCPWDNodeInfo;

/* --------------------------------
 * pcp.c
 * --------------------------------
 */

/* ------------------------------
 * pcp_error.c
 * ------------------------------
 */

#endif /* PCP_H */
