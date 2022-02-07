/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinite addition
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

char *addition(char *nbr1, char *nbr2, int o, int p)
{
    int i[2] = {my_strlen(nbr1), my_strlen(nbr2)};
    char *res = malloc(sizeof(char) * (i[0] + i[1] + 1));;
    char l = '0';
    int n = i[1];

    if (i[0] > i[1])
        n = i[0];
    for (int m = 0; m < n; m++) {
        if (l == '1' && nbr1[m] + nbr2[p] == 0)
            o = '1';
        else if (nbr1[m] == '\0' || nbr2[p] == '\0') {
            if (nbr1[m] == '\0') {
                o = nbr2[p];
                o = nbr1[m];
            }
        } else
            o = (nbr1[m] + nbr2[p]) - 96 + l;
        l = '0';
        if (o > '9') {
            o -= 10;
            l = '1';
        }
        if (m == n - 1 && l == '1')
            n++;
        res[m] = o;
        if (nbr2[p] != '\0')
            p++;
    }
    return (res);
}

int main(int ac, char **av)
{
    char *result;
    int o;
    int p = 0;

    my_revstr(av[1]);
    my_revstr(av[2]);
    result = addition(av[1], av[2], o, p);
    my_revstr(result);
    my_putstr(result);
    return (0);
}
