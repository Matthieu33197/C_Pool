/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** square_root
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i != nb) {
        i += 1;
        if (i > nb || nb < 0)
            return (0);
    }
    return (i);
}
