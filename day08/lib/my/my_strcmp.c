/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        j++;
    }
    if (i < j)
        return (i - j);
    if (i == j)
        return (0);
    if (i > j)
        return (i - j);
}
