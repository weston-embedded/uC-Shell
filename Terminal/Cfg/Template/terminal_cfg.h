/*
*********************************************************************************************************
*                                              uC/Shell
*                                            Shell utility
*
*                    Copyright 2007-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                               TERMINAL
*
*                                      CONFIGURATION TEMPLATE FILE
*
* Filename : terminal_cfg.h
* Version  : V1.04.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                           TASKS PRIORITIES
*********************************************************************************************************
*/

#define  TERMINAL_OS_CFG_TASK_PRIO                        16u


/*
*********************************************************************************************************
*                                              STACK SIZES
*                             Size of the task stacks (# of OS_STK entries)
*********************************************************************************************************
*/

#define  TERMINAL_OS_CFG_TASK_STK_SIZE                  1024u


/*
*********************************************************************************************************
*                                               TERMINAL
*
* Note(s) : (1) Defines the maximum length of a command entered on the terminal, in characters.
*
*           (2) Defines the maximum path length of the Current Working Directory (CWD).
*
*           (3) Enables/disables command history.
*
*           (4) Defines the number of items to hold in the command history.
*
*           (5) Defines the length of a item in the command history.  If a command is entered into the
*               terminal that exceeds this length, then only the first characters, up to this number of
*               characters, will be copied into the command history.
*********************************************************************************************************
*/

#define  TERMINAL_CFG_MAX_CMD_LEN                        260u   /* Cfg max cmd  len         (see Note #1).              */
#define  TERMINAL_CFG_MAX_PATH_LEN                       260u   /* Cfg max path len         (see Note #2).              */

#define  TERMINAL_CFG_HISTORY_EN                 DEF_ENABLED    /* En/dis history           (see Note #3).              */
#define  TERMINAL_CFG_HISTORY_ITEMS_NBR                   16u   /* Cfg nbr history items    (see Note #4).              */
#define  TERMINAL_CFG_HISTORY_ITEM_LEN                    64u   /* Cfg history item len     (see Note #5).              */
