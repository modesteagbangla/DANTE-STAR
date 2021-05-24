/*
** EPITECH PROJECT, 2020
** B-CPE-200-COT-2-1-dante-yemalin.agbangla
** File description:
** dante.h
*/
#ifndef _DANTE_H_
#define _DANTE_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>


int my_getnbr(char const *str);
int my_getnbr(char const *str);
int my_putstr(char *str);
void my_putchar(char c);
char **build_array(int line, int colon, char **array);
char **create(int line, int colon);
int nb_colon(char **av2);
int nb_line(char **av1);
char **build_array_2(char **str, int x, int y);

#endif