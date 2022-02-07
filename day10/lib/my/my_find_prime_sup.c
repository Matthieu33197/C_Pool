/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** prime_find
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1)
        nb++;
    return (nb);
}
