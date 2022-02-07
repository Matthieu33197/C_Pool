/*
** EPITECH PROJECT, 2019
** my
** File description:
** all my
*/

#ifndef __MY_H__
#define __MY_H__

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);

#endif
