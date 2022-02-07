/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** strdup
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    int i;
    char *dest = NULL;

    i  = my_strlen(src) + 1;
    dest = malloc(sizeof(char) * i);
    my_strcpy(dest, src);
    return (dest);
}
