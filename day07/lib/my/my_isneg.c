/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** fede
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
