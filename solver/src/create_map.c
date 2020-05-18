/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** create_map
*/

#include "solver.h"

char **create_map(char *files)
{
    FILE *file = fopen(files, "r");
    int size = fseek(file, 0, SEEK_END);
    char *buff;
    char **map;

    if (file == NULL || size == -1 || ftell(file) < 1)
        exit(84);
    size = ftell(file);
    buff = malloc(sizeof(char) * size + 1);
    rewind(file);
    fread(buff, size, 1, file);
    if (buff[size - 1] == '\n') {
        free(buff);
        fclose(file);
        exit(84);
    }
    buff[size] = '\0';
    map = str_to_double_str(buff, 0, '\n');
    free(buff);
    fclose(file);
    return map;
}
