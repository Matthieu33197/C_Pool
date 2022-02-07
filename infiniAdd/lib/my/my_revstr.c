/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
        i++;
    i = i - 1;
    while (j<i) {
        my_swap(&str[j], &str[i]);
        j++;
        i--;
    }
    return (str);
}
