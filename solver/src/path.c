/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** path
*/

#include "solver.h"

path_t *no_direction(path_t *p)
{
    path_t *tmp;

    tmp = p;
    p = p->old;
    free(tmp);
    return p;
}

void solve_map(char **map, path_t *p)
{

    while (p->old && (p->pos.x != p->end.x || p->pos.y != p->end.y)) {
        map[p->pos.y][p->pos.x] = 'x';
        if (map[p->pos.y][p->pos.x + 1] == '*') {
            p = prepar_struc(p->pos.y, p->pos.x + 1, p);
            continue;
        } if (map[p->pos.y + 1] && map[p->pos.y + 1][p->pos.x] == '*') {
            p = prepar_struc(p->pos.y + 1, p->pos.x, p);
            continue;
        } if (p->pos.x - 1 >= 0 && map[p->pos.y][p->pos.x - 1] == '*') {
            p = prepar_struc(p->pos.y, p->pos.x - 1, p);
            continue;
        } if (p->pos.y - 1 >= 0 && map[p->pos.y - 1][p->pos.x] == '*') {
            p = prepar_struc(p->pos.y - 1, p->pos.x, p);
            continue;
        } else {
            p = no_direction(p);
        }
    }
    print_solver(map, p);
}

void print_solver(char **map, path_t *player)
{
    path_t *tmp;

    while (player->old) {
        map[player->pos.y][player->pos.x] = 'o';
        tmp = player;
        player = player->old;
        free(tmp);
    }
}

path_t *prepar_struc(int y, int x, path_t *old)
{
    path_t *new = malloc(sizeof(path_t));

    new->old = old;
    new->pos.x = x;
    new->pos.y = y;
    if (old) {
        new->end.x = old->end.x;
        new->end.y = old->end.y;
    }
    return new;
}
