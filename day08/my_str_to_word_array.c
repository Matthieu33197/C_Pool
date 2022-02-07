/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** str to word
*/

#include "my.h"

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j;
    int k = 0;
    int y = 0;
    int u = 0;
    char *thechar;
    char **array;

    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <=57) {
            while(str[i] <= 57)
                i++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            while((str[i] >= 'a' && str[i] <= 'Z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                i++;
            }
        } else {
            i++
        }
        my_strncpy(thechar, str, i);
        while(a[k][y] != '\0') {
            array[k][y] = thechar[u];
            y++;
        }
        y = 0;
        k++;
    }
}
