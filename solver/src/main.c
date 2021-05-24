/*
** EPITECH PROJECT, 2020
** B-CPE-200-COT-2-1-dante-yemalin.agbangla
** File description:
** main.c
*/

#include "../include/dante.h"
int lin_e;
int colon_ne;

int main(int ac, char **av)
{
    if (ac != 2)
        exit (84);
    char *str = my_read_tab(av);
    char **tab = str_tab_c(str);

    dante *liste = NULL;
    liste = add_begin(liste, 0, 0, tab);

    while (1) {
        tab = modified_map(liste, tab);
        liste = error(liste, tab);
        liste = browse(liste, tab);
        my_release(tab);
        tab = str_tab_c(str);
        if ((lin_e - 1 == liste->x) && (colon_ne - 1 == liste->y))
            break; }
    display_modified_map(liste, tab);
}
