/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** revstr
*/

void my_swp(char *x, char *y)
{
    char w = *x;
    char v = *y;

    *y = w;
    *x = v;

}

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
        i++;
    i = i - 1;
    while (j<i) {
        my_swp(&str[j], &str[i]);
        j++;
        i--;
    }
    return (str);
}
