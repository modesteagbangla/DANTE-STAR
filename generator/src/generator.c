/*
** EPITECH PROJECT, 2021
** generator
** File description:
** generator
*/

#include "../include/dante.h"

int nb_line(char **av1)
{
    int nbr = my_getnbr(av1[2]);
    return (nbr);
}

int nb_colon(char **av2)
{
    int c = my_getnbr(av2[1]);
    return (c);
}

char **create(int line, int colon)
{
    int a = 0;
    char **table = malloc(sizeof(char *) * (line + 2));

    for (a = 0; a < line; a++) {
        table[a] = malloc(sizeof(char) * (colon + 2));
    }
    return (table);
}

char **build_array(int line, int colon, char **array)
{
    int i = 0, a = 0, b = 0;

    for (; a < line; a++) {
        for (b = 0; b < colon; b++) {
            if (a % 2 == 0) {
                array[a][b] = '*';
            } else {
                int ra = random() % colon;
                array[a][b] = 'X';
                array[a][ra] = '*'; } }
        array[a][b] = '\0'; }
    array[line - 1][colon - 1] = '*';
    array[a] = NULL;
    return (array);
}

char **build_array_2(char **str, int x, int y)
{
    int a = 0, z = 0, j = 0, i = 0;

    for (j = 0; j < x; j++)
        str[i][j] = '*';
    str[i][j] = '\0';
    for (i = 1; i < y - 1; i++) {
        for (j = 0; j < x; j++) {
            if ((j + 1) % 2 == 0)
                str[i][j] = 'X';
            else if ((j + 1) % 2 != 0 || (i + 1) % 2 == 0)
                str[i][j] = '*';
            else str[i][j] = ' '; }
        str[i][j] = '\0'; }
    for (j = 0; j < x; j++)
        str[i][j] = '*';
    str[i][j] = '\0';
    str[i + 1] = NULL;
    return (str);
}