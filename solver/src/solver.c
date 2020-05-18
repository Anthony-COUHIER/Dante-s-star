/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** solver.c
*/

#include "solver.h"

int main(int ac, char **av)
{
    path_t *tmp;
    path_t *player = malloc(sizeof(path_t));
    char **map;

    if (ac != 2) {
        free(player);
        return 84;
    }
    map = create_map(av[1]);
    if (check_map(map, player))
        return 84;
    player->old = NULL;
    tmp = player;
    player = prepar_struc(0, 0, player);
    if (map[0][0] != 'X')
        solve_map(map, player);
    clean_maze(map);
    (map[0][0] == 'o') ? my_printf("%S", map) : my_putstr(NOSOLU);
    free_array(map);
    free(tmp);
    return (0);
}
