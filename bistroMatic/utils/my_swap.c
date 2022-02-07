/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swap 2 string
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    int d = *b;

    *b = c;
    *a = d;
}
