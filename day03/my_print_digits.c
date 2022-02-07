/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** 
*/

#include <unistd.h>

int my_print_digits(void)
{
    int Z;

    Z = 0;
    while (Z <= 9) {
        my_putchar(Z + '0');
        Z++;
    }
    return (0);
}
