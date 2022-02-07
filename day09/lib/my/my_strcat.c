;/*
** EPITECH PROJECT, 2019
** m_strcat
** File description:
** strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j;

    j = my_strlen(dest);
    while (src[i] != '\0') {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}
