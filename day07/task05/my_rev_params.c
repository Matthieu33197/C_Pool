/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** rev
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *argv)
{
    int i = 0;

    while (argv[i] != '\0') {
        my_putchar(argv[i]);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int j = argc - 1;

    while (j >= 0) {
        my_putstr(argv[j]);
        my_putchar('\n');
        j--;
    }
    return (0);
}
