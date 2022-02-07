/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    int i;

    while (str[i] >= 97 && str[i] <= 122 || str[i] == ' ') {
        if (str[i] == ' ')
            i++;
        str[i] -= 32;
        if (str[i] == '\0')
            return (str);
        i++;
    }
    return (str);
}
