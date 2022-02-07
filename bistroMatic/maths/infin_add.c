/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** add two numbers of any size.
*/

#include "../include.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char *infin_add(char *number1, char *number2)
{
    int nb1 = my_strlen(number1) - 1;
    int nb2 = my_strlen(number2) - 1;
    int n = 0;
    int nb = 0;
    char *a =  malloc(nb1 + nb2 * sizeof(char));

    if (a == NULL)
        return (0);
    while (nb1 >= 0 && nb2 >= 0) {
        nb += (number1[nb1] - '0') + (number2[nb2] - '0');
        if (nb >= 10) {
            a[n] = (nb % 10) + '0';
            nb = 1;
        } else {
            a[n] = nb + '0';
            nb = 0;
        }
        nb1--;
        nb2--;
        n++;
    }
    while (nb1 >= 0 || nb2 >= 0) {
        if (nb1 >= 0) {
            nb += number1[nb1] - '0';
            a[n] = nb + '0';
            nb1--;
            nb = 0;
        } else {
            nb += number2[nb2] - '0';
            a[n] = nb + '0';
            nb2--;
            nb = 0;
        }
        n++;
    }
    if (nb != 0)
        a[n] = nb + '0';
    return (my_evil_str(a));
}
