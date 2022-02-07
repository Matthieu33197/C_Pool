/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** 
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    int d = *b;

    *b = c;
    *a = d;
}
