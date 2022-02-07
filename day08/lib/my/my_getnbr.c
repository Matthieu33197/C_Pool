/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** djazdi
*/

#include <unistd.h>
#include <stdio.h>

int nb_signs(char const *str)
{
    int l = 0;
    while (str[l] && str[l] == '+' || str[l] == '-')
        l++;
    return (l);
}

int signs(char const *str)
{
    int p = 0;
    int nb = 0;

    while (str[p] && str[p] == '+' || str[p] == '-') {
        if (str[p] == '-')
            nb++;
        p++;
    }
}

int my_getnbr(char const *str)
{
    int x = nb_signs(str);
    int nb = 0;
    int y = signs(str);

    while (str[x] && str[x] >= '0' && str[x] <= '9') {
        nb = nb * 10 + str[x] - '0';
        x++;
    }
    if (y % 2 != 0)
        nb = nb * -1;
    return (nb);
}
