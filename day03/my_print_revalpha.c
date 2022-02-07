/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** 
*/


#include <unistd.h>

int my_print_revalpha(void)
{
    int z;

    z = 122;
    while (z >= 97) {
        my_putchar(z);
        z--;
    }
    return (0);
}
