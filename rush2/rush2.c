
/*
** EPITECH PROJECT, 2019
** Rush2
** File description:
** Counting the number of occurences of a letter
*/

#include "include/my.h"

int count_letter(char *str, char c)
{
    int nbr_letter = 0;
    int i = 0;

    my_strlowcase(str);
    while (str[i] != '\0') {
        if (str[i] == c)
            nbr_letter++;
        i++;
    }
    return (nbr_letter);
}

void display(char *argv[], int i, int k)
{
    int nbr_all = my_strlen_of(argv[1]);
    int percentage;
    int virgule;

    percentage = i * 10000 / nbr_all;
    virgule  = percentage % 100;
    percentage = percentage / 100;
    my_putchar(argv[k][0]);
    my_putchar(':');
    my_put_nbr(i);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(percentage);
    my_putchar('.');
    my_put_nbr(virgule);
    if (virgule == 0)
        my_putchar('0');
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int main(int argc, char *argv[])
{
    int i;
    int k = 2;
    int nbr_all = my_strlen_of(argv[1]);
    int percentage;
    int virgule;

    while (k < argc) {
        if (argv[k][0] >= 'A' && argv[k][0] <= 'Z')
            argv[k][0] += 32;
        if ((argv[k][0] < 'A' || argv[k][0] > 'Z') && (argv[k][0] < 'a')) {
            return (84);
        } else {
            i = count_letter(argv[1], argv[k][0]);
            display(argv, i, k);
            k++;
        }
    }
    return (0);
}
