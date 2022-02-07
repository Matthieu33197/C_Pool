/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** params
*/

#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str);

char *concat_params(int argc, char **argv)
{
    int j = 0;
    int i = 0;
    int l = 0;
    char *dest;

    dest = malloc(sizeof(char) * (argc + 1));
    while (i < argc) {
        while (argv[i][j] != '\0') {
            dest[l] = argv[i][j];
            l++;
            j++;
        }
        dest[l] = '\n';
        l++;
        i++;
        j = 0;
    }
    dest[l] = '\0';
    return (dest);
}
