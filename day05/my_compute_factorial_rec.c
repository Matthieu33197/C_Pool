/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 2147483647)
        return (0);
    if (nb == 1 || nb == 0)
        return (1);
    else
        return (nb * my_compute_factorial_rec(nb - 1));
}
