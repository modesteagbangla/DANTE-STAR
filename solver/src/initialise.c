/*
** EPITECH PROJECT, 2020
** solver
** File description:
** initialise.c
*/

#include "../include/dante.h"

dante *initialise(dante *liste, char **map)
{
    if (map[liste->x][liste->y + 1] == '*')
        liste->right = 0;
    else liste->right = -1;
    if ((map[liste->x + 1] != NULL) && map[liste->x + 1][liste->y] == '*')
        liste->down = 0;
    else liste->down = -1;
    if ((liste->y - 1 >= 0) && map[liste->x][liste->y -1] == '*')
        liste->left = 0;
    else liste->left = -1;
    if ((liste->x - 1 >= 0) && map[liste->x - 1][liste->y] == '*')
        liste->up = 0;
    else liste->up = -1;
    return (liste);
}
