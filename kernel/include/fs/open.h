/******************************************************************************/
/* Important Summer 2015 CSCI 402 usage information:                          */
/*                                                                            */
/* This fils is part of CSCI 402 kernel programming assignments at USC.       */
/* Please understand that you are NOT permitted to distribute or publically   */
/*         display a copy of this file (or ANY PART of it) for any reason.    */
/* If anyone (including your prospective employer) asks you to post the code, */
/*         you must inform them that you do NOT have permissions to do so.    */
/* You are also NOT permitted to remove or alter this comment block.          */
/* If this comment block is removed or altered in a submitted file, 20 points */
/*         will be deducted.                                                  */
/******************************************************************************/

/*
 *  FILE: open.h
 *  AUTH: mcc
 *  DESC:
 *  DATE: Tue Apr  7 18:52:52 1998
 */

#pragma once

struct open_args;
struct proc;

int do_open(const char *filename, int flags);
int get_empty_fd(struct proc *p);
