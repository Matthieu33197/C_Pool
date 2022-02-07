/*
** EPITECH PROJECT, 2019
** my_compute_power.it
** File description:
** power_it
*/

int my_compute_power_it(int nb, int p)
{
    int r = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    while (p != 0) {
        r *= nb;
        p--;
        if (r < 0 || nb > 2147483647 || nb < 0)
            return (0);
    }
    return (r);
}
