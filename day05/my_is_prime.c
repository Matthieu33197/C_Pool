/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** prime
*/

int my_is_prime(int nb)
{
    int i = 3;

    if (nb < 2 &&  nb % 2 == 0)
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
