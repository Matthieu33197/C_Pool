/*
** EPITECH PROJECT, 2019
** my_strcmp_multi.c
** File description:
** opake's my_strcmp.c made the 28/10/19
*/

int my_strcmp_multi(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 < len2)
        return (1);
    else if (len1 > len2)
        return (-1);
    for (int i = 0; str1[i]; i++)
        if (str1[i] < str2[i])
            return (1);
        else if (str1[i] > str2[2])
            return (-1);
    return (0);
}
