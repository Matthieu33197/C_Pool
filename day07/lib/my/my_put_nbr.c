/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** cdsefs
*/

#include <unistd.h>

int neg(int i)
{
    if ( i == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        i = 147483648;
    }
    if (i < 0) {
        i = i * -1;
        my_putchar('-');
    }
    return (i);
}

int my_put_nbr(int nb)
{
    nb = neg(nb);
    if (nb < 10) {
        putchar(nb + '0');
    } else {
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
}
