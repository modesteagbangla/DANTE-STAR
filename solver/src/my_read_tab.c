/*
** EPITECH PROJECT, 2020
** solver
** File description:
** my_read_tab.c
*/

#include "../include/dante.h"

char *my_read_tab(char **av)
{
    struct stat len;
    stat(av[1], &len);
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        exit (84);
    char *buf = malloc(len.st_size + 1);
    int rd = read(fd, buf, len.st_size);
    buf[len.st_size] = '\0';
    return (buf);
}