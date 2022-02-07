/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int j = 0;

    while (s1[i] != s1[n]) {
        i++;
    }
    while (s2[j] != s2[n]) {
        j++;
    }
    if (i < j)
        return (i - j);
    if (i == j)
        return (0);
    if (i > j)
        return (i - j);
}
