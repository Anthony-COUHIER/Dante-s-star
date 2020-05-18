/*
** EPITECH PROJECT, 2019
** mi.h
** File description:
** lib
*/

#ifndef SOLV_H
#define SOLV_H

#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <wctype.h>
#include <sys/types.h>

#include "../lib/include/lib.h"

#define NOSOLU "no solution found"
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[1;36m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[1;36m"
#define KWHT  "\x1B[0;37m"
#define KWHTB  "\x1B[1;37m"

typedef struct pos
{
    int x;
    int y;
}pos_t;

typedef struct path {
    pos_t pos;
    pos_t end;
    struct path *old;
} path_t;

void free_array(char **sheet);
void solve_map(char **map, path_t*);
int check_map(char **map, path_t*);
char **create_map(char *files);
path_t *prepar_struc(int x, int y, path_t *old);
void print_solver(char **map, path_t *player);
void clean_maze(char **map);
#endif
