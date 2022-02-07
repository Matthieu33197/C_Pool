/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** 
*/

#include <unistd.h>

int my_print_alpha(void)
{
    int a;

    a = 97;
        while (a <= 122) {
            my_putchar(a);
            a++;
        }
    return (0);
}
