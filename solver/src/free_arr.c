/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** free_arr.c
*/

#include "solver.h"

void free_array(char **sheet)
{
    int i;

    for (i = 0; sheet[i] != NULL; i++)
        free(sheet[i]);
    free(sheet);
}
