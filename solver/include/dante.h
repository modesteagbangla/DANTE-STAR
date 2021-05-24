/*
** EPITECH PROJECT, 2020
** B-CPE-200-COT-2-1-dante-yemalin.agbangla
** File description:
** dante.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define verif_up() if (liste->up == 0) {   \
        liste = recheck(liste, 2);  \
        liste = add_begin(liste, liste->x - 1, liste->y, map);  \
        liste = recheck(liste, 3);  \
        return (liste); }
#define verif_left() if (liste->left == 0) {    \
        liste = recheck(liste, 0);  \
        liste = add_begin(liste, liste->x, liste->y - 1, map);  \
        liste = recheck(liste, 1);  \
        return (liste); }
#define verif_down() if (liste->down == 0) {    \
        liste = recheck(liste, 3);  \
        liste = add_begin(liste, liste->x + 1, liste->y, map);  \
        liste = recheck(liste, 2);  \
        return (liste); }
#define verif_right() if (liste->right == 0) {  \
        liste = recheck(liste, 1);  \
        liste = add_begin(liste, liste->x, liste->y + 1, map);  \
        liste = recheck(liste, 0);  \
        return (liste); }

typedef struct dante dante;
struct dante
{
    int x, y, right, left, down, up;
    dante *next;
};


extern int lin_e;
extern int colon_ne;

char *my_read_tab(char **av);
int line_t(char *str);
void my_release(char **str);
dante *add_begin(dante *liste, int x, int y, char **map);
dante *create_elem(int value);
dante *delete_elem(dante *liste);
char **str_tab_c(char *str);
int line_t(char *str);

dante *recheck(dante *liste, int value);
dante *browse_t(dante *liste, char **map);
dante *browse(dante *liste, char **map);
dante *add_begin(dante *liste, int x, int y, char **map);
dante *delete_elem(dante *liste);
void display_modified_map(dante *liste, char **map);
char **modified_map(dante *liste, char **map);
int error_r(dante *liste);
int reverify_checker(dante *liste, char **map);
dante *error(dante *liste, char **map);
dante *initialise(dante *liste, char **map);
