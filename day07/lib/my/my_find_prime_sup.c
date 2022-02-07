/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** prime_find
*/

int my_prime(int nb)
{
    int i = 3;

    if (nb != 2 &&  nb % 2 == 0)
        return (0);
    if (nb == 2)
        return (1);
    while (i * i <= nb) {
        if (nb % 2 == 0)
            return (0);
        i += 2;
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_prime(nb) != 1)
        nb++;
    return (nb);
}
