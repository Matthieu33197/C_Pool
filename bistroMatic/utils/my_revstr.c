/*
** EPITECH PROJECT, 2019
** revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;

    for (int j = 0; j < i; j++, i--)
        my_swap(&str[j], &str[i]);
    return (str);
}
