/*
** EPITECH PROJECT, 2019
** evalexpr
** File description:
** makes any calculs.
*/

#include <stdlib.h>
#include <stddef.h>
#include "include/my.h"

int size_nb(char const *str)
{
    int i = 0;
    int j = 1;

    while (str[i] != '\0') {
            j++;
            i++;
    }
    j++;
    return (j);
}

int multi(char const *str, int *nbr)
{
    int i = 0;
    int j = 1;

    while (str[i] != '\0') {
        while (str[i] != '/' && str[i] != '*' && str[i] != '%' && str[i]) {
            i++;
            if (str[i] == '+' || str[i] == '-')
                j++;
        }
        if (str[i] == '*') {
            if (nbr[0] == 0)
                nbr[0] += nbr[j] * nbr[j + 1];
            else
                nbr[0] *= nbr[j + 1];
        }
        if (str[i] == '/') {
            if (nbr[0] == 0)
                nbr[0] += nbr[j] / nbr[j + 1];
            else
                nbr[0] /= nbr[j + 1];
        }
        if (str[i] == '%') {
            if (nbr[0] == 0)
                nbr[0] += nbr[j] % nbr[j + 1];
            else
                nbr[0] = nbr[0] % nbr[j + 1];
        }
        if (str[i] == '*' || str[i] == '/' || str[i] == '%') {
            nbr[j] = 0;
            nbr[j + 1] = 0;
        }
        ((str[i] != '\0')?(i++):(0));
        j++;
    }
    return (nbr[0]);
}

int add(char const *str, int *nbr)
{
    int i = 0;
    int j = 1;

    while (str[i] != '\0') {
        while (str[i] >= '0' && str[i] <= '9') {
            i++;
            if (str[i] == '*' || str[i] == '/' || str[i] == '%') {
                i++;
                j++;
            }
        }
        if (str[i] == '+') {
            if (j == 1 && nbr[0] == 0)
                nbr[0] += nbr[j] + nbr[j + 1];
            else if (nbr[j + 1] != 0) {
                nbr[0] += nbr[j + 1];
            } else if (nbr[j] != 0) {
                nbr[0] += nbr[j];
            } else
                nbr[0] += nbr[j + 1];
        } else if (str[i] == '-') {
            if (j == 1 && nbr[0] == 0)
                nbr[0] += nbr[j] - nbr[j + 1];
            else
                nbr[0] -= nbr[j + 1];
        }
        ((str[i] != '\0')?(i++):(0));
        j++;
    }
    return (nbr[0]);
}

int parenthese(char const *str, int *nbr)
{
    int i = 0;
    char nostr[size_nb(str)];
    int l = 0;

    while (str[i] != '\0') {
        while (str[i] != '(' && str[i] != '\0')
            i++;
        if (str[i] == '(') {
            i++;
            l = 0;
            while (str[i] != ')') {
                nostr[l] = str[i];
                i++;
                l++;
            }
        }
    }
    nbr[0] = multi(nostr, nbr);
    nbr[0] = add(nostr, nbr);
    return (nbr[0]);
}

int eval_expr(char const *str)
{
    int i = 0;
    int j = 0;
    int max_nb = size_nb(str);
    int nbr[max_nb];

    for (j; j < max_nb; j++) {
        nbr[j] = 0;
    }
    j = 1;
    while (str[i]) {
        while (str[i] <= '9' && str[i] >= '0' && str[i]) {
            nbr[j] *= 10;
            nbr[j] += str[i] - '0';
            i++;   
        }
        ((j <= max_nb)?(j++):(0));
        ((str[i] != '\0')?(i++):(0));
    }
    nbr[0] = parenthese(str, nbr);
    nbr[0] = multi(str, nbr);
    nbr[0] = add(str, nbr);
    return (nbr[0]);
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
