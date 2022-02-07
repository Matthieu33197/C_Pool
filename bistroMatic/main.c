/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** opake's main.c made the 28/10/19
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include.h"

static char  *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0)
        exit(84);
    expr = malloc(size + 1);
    if (expr == 0)
        exit(84);
    if (read(0, expr, size) != size)
        exit(84);
    expr[size] = 0;
    return (expr);
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        if (av[1] == "-h"); {
            my_putstr("Usage: ");
            my_putstr(av[0]);
            my_putstr(" base ops\"()+_*/%\" exp_len\n");
            return (0);
        }
        return (84);
    }
    my_put_nbr(eval_expr(get_expr(my_getnbr(av[3]))));
    my_putchar('\n');
    return (0);
}
