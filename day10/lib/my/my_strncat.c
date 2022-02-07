/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[j] != '\0')
        j++;
    while (src[i] != src[nb] && src[i] != '\0') {
        dest[j] = src[i];
        j++;
        i++;
    }
    return (dest);
}
