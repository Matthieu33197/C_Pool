/*
** EPITECH PROJECT, 2019
** infin_multi
** File description:
** multiple two numbers of any size.
*/

#include "include/my.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char *multi(char *number1, char number2, int nb2)
{
    int nb1 = my_strlen(number1) - 1;
    int n = 0;
    int nb = 0;
    char *a =  malloc((nb1 + nb2) * sizeof(char));

    if (a == NULL)
        return ("84");
        while (nb1 >= 0 && number1[nb1] != '-') {
            nb += (number1[nb1] - '0') * (number2 - '0');
            if (nb >= 10) {
                a[n] = (nb % 10) + '0';
                nb = (nb / 10);
            } else {
                a[n] = nb + '0';
                nb = 0;
            }
            nb1--;
            n++;
        }
        if (nb != 0)
            a[n] = nb + '0';
        return (my_evil_str(a));
}

char *infin_multi(char *number1, char *number2)
{
    int nb1 = my_strlen(number1);
    int nb2 = my_strlen(number2);
    int j = nb2 - 2;
    int s = 1;
    int i = 0;
    char *dest =  malloc(nb1 + nb2 * sizeof(char));
    char *b = malloc(nb1 + nb2 * sizeof(char));

    if (dest == NULL || b == NULL)
        return ("84");
    b = multi(number1, number2[nb2 - 1], nb2);
    while (j >= 0 && number2[j] != '-')
    {
        dest = multi(number1, number2[j], nb2);
        while (dest[i])
            i++;
        for (int n = 0; n < s; n++) {
            dest[i] = '0';
            i++;
        }
        i = 0;
        dest = infin_add(dest, b);
        j--;
        s++;
    }
    if ((number1[0] == '-' && number2[0] != '-') ||
        (number1[0] != '-' && number2[0] == '-')) {
        my_evil_str(dest);
        while (dest[i])
            i++;
        dest[i] = '-';
        my_evil_str(dest);
    }
    return (dest);
}

int main(int argc, char **argv)
{
    my_putstr(infin_multi(argv[1], argv[2]));
}
