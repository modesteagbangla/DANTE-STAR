/*
** EPITECH PROJECT, 2020
** solver
** File description:
** primo_algo.c
*/

#include "../include/dante.h"

dante *recheck(dante *liste, int value)
{
    if (value == 0)
        liste->left = -1;
    else if (value == 1)
        liste->right = -1;
    if (value == 2)
        liste->up = -1;
    else if (value == 3)
        liste->down = -1;
    return (liste);
}

dante *browse(dante *liste, char **map)
{
    int x = liste->x, y = liste->y;
    verif_right();
    verif_down();
    verif_left();
    verif_up();
    if (x == 0 && y == 0) {
        write(1, "no solution found\n", 18);
        exit (0); }
    liste = delete_elem(liste);
    return (liste);
}

dante *add_begin(dante *liste, int x, int y, char **map)
{
    dante *li = malloc(sizeof(dante));
    li->x = x, li->y = y;
    li = initialise(li, map);
    li->next = liste;
    return (li);
}

dante *delete_elem(dante *liste)
{
    dante *temp = liste->next;
    free(liste);
    return (temp);
}
