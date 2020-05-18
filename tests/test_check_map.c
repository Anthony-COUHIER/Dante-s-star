/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** test_check_map
*/

#include <criterion/criterion.h>
#include "solver.h"

Test(good_map, test_check_map)
{
    path_t player;
    char *map[] = {"****\0", "XXX*\0", NULL};

    cr_assert_eq(check_map(map, &player), 0);
}

Test(bad_char_in_map, test_check_map)
{
    path_t player;
    char *map[] = {"A***", "XXX*"};

    cr_assert_eq(check_map(map, &player), 1);
}

Test(bad_map_size, test_check_map)
{
    path_t player;
    char *map[] = {"***", "XXX*"};

    cr_assert_eq(check_map(map, &player), 1);
}