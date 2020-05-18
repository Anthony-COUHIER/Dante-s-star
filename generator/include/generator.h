/*
** EPITECH PROJECT, 2019
** mi.h
** File description:
** lib
*/

#ifndef GENE_H
#define GENE_H

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

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[1;36m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[1;36m"
#define KWHT  "\x1B[0;37m"
#define KWHTB  "\x1B[1;37m"

int main(int argc, char **argv);
void my_free_2d(char **str);
char **perfect_maze(int x, int y);
void make_maze(char **map, int, int);
void get_map_imperfect(char **map);
#endif
