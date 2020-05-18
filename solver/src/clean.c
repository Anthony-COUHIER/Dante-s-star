/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** clean.c
*/

#include "solver.h"

void clean_maze(char **map)
{
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            map[i][j] = (map[i][j] == 'x') ? '*' : map[i][j];
        }
    }
}
