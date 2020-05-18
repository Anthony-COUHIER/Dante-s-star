/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** check_err.c
*/

#include "solver.h"

int check_map(char **map, path_t *player)
{
    int x;
    int y;
    int i;

    for (x = 0; map[0][x]; x++);
    for (y = 0; map[y] != NULL; y++);
    for (int j = 0; map[j]; j++) {
        for (i = 0; map[j][i]; i++) {
            if (map[j][i] != 'X' && map[j][i] != '*')
                return 1;
        }
        if (x != i)
            return 1;
    }
    player->end.x = x - 1;
    player->end.y = y - 1;
    return 0;
}
