/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** fosijdio
*/

void  my_swap(char *a, char *b)
{
    char c = *a;
    char d = *b;

    *b = c;
    *a = d;
}
