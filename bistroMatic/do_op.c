/*
** EPITECH PROJECT, 2019
** do-op
** File description:
** evalexpr
*/

#include "include.h"

int my_isnum(char const c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}

int atnum(char *a)
{
    int num = 0;
    int dec = 1;

    for (int i = my_strlen(a) - 1; i >= 0; i--, dec *= 10)
        num += (a[i] - '0') * dec;
    return (num);
}

int calc(int nbr1, int nbr2, char c)
{
    switch (c) {
    case '+':
        return (nbr1 + nbr2);
        break;
    case '-':
        return (nbr1 - nbr2);
        break;
    case '*':
        return (nbr1 * nbr2);
        break;
    case '/':
        return (nbr1 / nbr2);
        break;
    }
}
