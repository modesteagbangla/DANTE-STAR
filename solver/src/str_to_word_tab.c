/*
** EPITECH PROJECT, 2020
** solver
** File description:
** str_to_word_tab.c
*/

#include "../include/dante.h"

int line_t(char *str)
{
    int i = 0, j = 0;

    for (; str[i] != '\0'; i++)
        if (str[i] == '\n')
            j++;
    lin_e = j + 1;
    return (j+1);
}

char **str_tab_c(char *str)
{
    int p = 0, q = 0, i = 0, b = 0, line = line_t(str), colum = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (line +1));
    for (int a = 0, x = 0; a < line; ) {
        q = 0;
        for (; str[p] != '\n' && str[p] != '\0' && str[p] != '\n'; p++, q++);
        tab[a] = malloc(sizeof(char) * (q + 1));
        colon_ne = q;
        for (; (str[x] != '\n' && str[x] != '\0' && str[x] != '\n'); x++, b++)
            tab[a][b] = str[x];
        tab[a][b] = '\0';
        b = 0;
        x++, a++, p++;
    } tab[line] = NULL;
    return (tab);
}