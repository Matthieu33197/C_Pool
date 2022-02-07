/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** add two numbers of any size.
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include.h"

char *infin_sub(char *nbr1, char *nbr2)
{
    int nb1 = my_strlen(nbr1) - 1;
    int nb2 = my_strlen(nbr2) - 1;
    int n = 0;
    int nb = 0;
    int nbr = 0;
    int s = 0;
    char *a =  malloc(nb1 + nb2 * sizeof(char));

    if (a == NULL)
        return (0);
    while (nb1 >= 0 && nb2 >= 0 && nbr1[nb1] != '-' && nbr2[nb2] != '-') {
        if (my_strcmp(nbr1, nbr2) >= 0)
            nb += (nbr1[nb1] - '0') - (nbr2[nb2] - '0');
        else
            nb += (nbr2[nb2] - '0') - (nbr1[nb1] - '0');
        if (nb < 0 && (nb1 > 0 || nb2 > 0)) {
            while (nb < 0) {
                nbr++;
                nb++;
            }
            a[n] = (10 - nbr) + '0';
            nb = -1;
        } else {
            if (nb < 0) {
                nb *= -1;
                a[n + 1] = '-';
            }
            if (my_strcmp(nbr1, nbr2) >= 0) {
                if (nbr1[nb1] > '0') {
                    a[n] = nb + '0';
                    nb = 0;
                }
                else {
                    a[n] = '9';
                }
            }
            else {
                if (nbr1[nb1] > '0') {
                    a[n] = nb + '0';
                    nb = 0;
                }
                else {
                    a[n] = '9';
                }
            }
        }
        nb1--;
        nb2--;
        n++;
    }
    while ((nb1 >= 0 || nb2 >= 0) && (nbr1[nb1] != '-' || nbr2[nb2] != '-')) {
        if (nb1 >= 0 && nbr1[nb1] != '-') {
            nb += nbr1[nb1] - '0';
            if (nbr1[nb1] > '0') {
                a[n] = nb + '0';
                nb = 0;
            }
            else {
                a[n] = '9';
            }
            nb1--;
        } else if (nb2 >= 0 && nbr2[nb2] != '-') {
            nb += nbr2[nb2] - '0';
            if (nbr2[nb2] > '0') {
                a[n] = nb + '0';
                nb = 0;
            }
            else {
                a[n] = '9';
            }
            nb2--;
        }
        n++;
    }
    n--;
    if (my_strcmp(nbr1, nbr2) < 0)
        a[n] = '-';
    if (a[n] == '0') {
        a[n] = NULL;
    }
    return (my_evil_str(a));
}
