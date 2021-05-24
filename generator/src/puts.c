/*
** EPITECH PROJECT, 2020
** B-CPE-200-COT-2-1-dante-yemalin.agbangla
** File description:
** puts.c
*/

#include "../include/dante.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int a = 0;
    for (; str[a] != '\0'; a++) {
        my_putchar(str[a]);
    }
    return (0);
}