/*
** EPITECH PROJECT, 2020
** solver
** File description:
** algo.c
*/

#include "../include/dante.h"

void display_modified_map(dante *liste, char **map)
{
    int i = 0, j = 0;

    while (liste != NULL) {
        map[liste->x][liste->y] = 'o';
        liste = liste->next; }
    for (i = 0; map[i + 1] != NULL; i++)
        printf("%s\n", map[i]);
    printf("%s", map[i]);
}

char **modified_map(dante *liste, char **map)
{
    int i = 0, j = 0;
    while (liste != NULL) {
        map[liste->x][liste->y] = 'o';
        liste = liste->next;
    }
    return (map);
}

int error_r(dante *liste)
{
    int x = liste->x, y = liste->y, a = 0;
    while (liste != NULL) {
        if ((liste->x == x) && (liste->y == y)) {
            a++;
        }
        liste = liste->next; }
    return (a);
}

int reverify_checker(dante *liste, char **map)
{
    int compt = 0;
    if (map[liste->x][liste->y + 1] == 'o') compt++;
    if ((liste->y - 1 >= 0) && map[liste->x][liste->y -1] == 'o') compt++;
    if ((map[liste->x + 1] != NULL) && map[liste->x + 1][liste->y] == 'o')
        compt++;
    if ((liste->x - 1 >= 0) && map[liste->x - 1][liste->y] == 'o') compt++;
    return (compt);
}

dante *error(dante *liste, char **map)
{
    int a = error_r(liste);
    int b = 0;
    if (a > 1) {
        liste = delete_elem(liste);
        return (liste); }
    b = reverify_checker(liste, map);
    if (b > 1) {
        liste = delete_elem(liste);
        return (liste); }
    return (liste);
}