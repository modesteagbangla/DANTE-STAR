/*
** EPITECH PROJECT, 2020
** B-CPE-200-COT-2-1-dante-yemalin.agbangla
** File description:
** main.c
*/

#include "../include/dante.h"

void my_display_tab(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        for (int j = 0; str[i][j] != '\0'; j++) {
            write(1, &str[i][j], 1); }
        if (str[i + 1] != NULL)
            write(1, "\n", 1); }
}

void my_release(char **str)
{
    for (int i = 0; str[i] != NULL; i++)
        free(str[i]);
    free(str);
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        exit (84);
    if (atoi(av[1]) == 0 || atoi(av[2]) == 0)
        exit (84);
    char **array_2d = NULL;
    int line = nb_line(av);
    int colon = nb_colon(av);
    char **array = create(line, colon);
    if (ac == 3) {
        array_2d = build_array(line, colon, array); }
    else if (ac == 4 && strcmp(av[3], "perfect") == 0)
        array_2d = build_array_2(array, atoi(av[1]), atoi(av[2]));
    else exit (84);
    my_display_tab(array_2d);
    my_release(array_2d);
    return (0);
}