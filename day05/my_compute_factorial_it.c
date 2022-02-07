/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int nbr = 1;
    int i = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 1 || nb == 0)
        return (1);
    while (i <= nb) {
        nbr = nbr*i;
        i++;
        if (nbr < 0)
            return (0);
    }
    return (nbr);
}
