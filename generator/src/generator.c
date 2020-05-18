/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** generator.c
*/

#include "generator.h"

void my_free_2d(char **str)
{
    int i = 0;

    while (str[i]) {
        free(str[i]);
        i++;
    }
    free(str);
}

char **perfect_maze(int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));
    int j;
    int i;

    for (j = 0; j < y; j++) {
        map[j] = malloc(sizeof(char) * (x + 1));
        for (i = 0; i < x; i++)
            map[j][i] = 'X';
        map[j][i] = '\0';
    }
    map[j] = NULL;
    make_maze(map, x, y);
    return map;
}

void make_maze(char **map, int size_x, int size_y)
{
    int value = 0;

    for (int y = 0; y < size_y; y += 2) {
        for (int x = 0; x < size_x; x += 2) {
            value = rand() % 2;
            map[y][x] = '*';
            if (!y || !x)
                map[(y) ? y - 1 : y][(x) ? x - 1 : x] = '*';
            else
                map[(value) ? y : y - 1][(value) ? x - 1 : x] = '*';
        }
    }
    map[size_y - 1][size_x - 1] = '*';
    if (size_y % 2 || size_x % 2)
        return;
    value = rand() % 2;
    map[(value) ? size_y - 1 : size_y - 2] \
    [(value) ? size_x - 2 : size_x - 1] = '*';
}

void get_map_imperfect(char **map)
{
    for (int j = 1; map[j + 1]; j += 2) {
        for (int i = 1; map[j][i + 1]; i += 2) {
            if (map[j][i] == 'X')
                map[j][i] = (rand() % 2) ? '*' : 'X';
        }
    }
}

int main(int argc, char **argv)
{
    int x, y;
    char **map;

    srand(time(NULL));
    if (argc != 3 && argc != 4)
        return 84;
    if ((x = atoi(argv[1])) <= 0 || (y = atoi(argv[2])) <= 0)
        return 84;
    map = perfect_maze(x, y);
    if (argc == 3)
        get_map_imperfect(map);
    if (argc == 4 && strcmp(argv[3], "perfect")) {
        my_free_2d(map);
        return 84;
    }
    for (int i = 0; map[i]; i++)
        (map[i + 1]) ? printf("%s\n", map[i]) : printf("%s", map[i]);
    my_free_2d(map);
    return 0;
}
