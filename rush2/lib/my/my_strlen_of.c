/*
** EPITECH PROJECT, 2019
** ozifnizeo
** File description:
** ozijfzoier
*/

#include <unistd.h>

int my_strlen_of(char const *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            j++;
        i++;

}
    return (j);
}
