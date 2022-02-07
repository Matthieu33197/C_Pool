/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** strstr
*/

int norme(char const *to_find, char *str, int j, int i)
{
    while (to_find[j] == str[i + j]) {
        if (to_find[j+1] == '\0')
            return (i);
        j++;
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        norme(to_find, str, j, i);
        i++;
    }
    return (0);
}
