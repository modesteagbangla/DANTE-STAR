/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** function my_getnbr
*/

#include "../include/dante.h"

int my_getnbr(char const *str)
{
    int i = 0, ch = 1, ans = 0;

    for (i = 0; str[i] == '+' || str[i] == '-'; i++)
        if (str[i] == '-')
            ch = ch * (-1);
    for ( ; str[i] >= '0' && str[i] <= '9';i++)
        ans = (ans * 10) + (str[i] - 48);
    return (ch * ans);
}