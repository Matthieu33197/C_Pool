/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** strcapitalize
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int i = 1;

    my_strlowcase(str);
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') &&
            (str[i - 1] < '0' || str[i - 1] > '9')) {
            if ((str[i - 1] < 'a' || str[i - 1] > 'z')
                && (str[i - 1] < 'A' || str[i - 1] > 'Z'))
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}
