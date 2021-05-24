/*
** EPITECH PROJECT, 2020
** solver
** File description:
** my_free.c
*/

#include "../include/dante.h"

void my_release(char **str)
{
    int i = 0;

    for (i = 0; str[i] != NULL; i++)
        free(str[i]);
    free(str);
}