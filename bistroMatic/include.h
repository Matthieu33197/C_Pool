/*
// EPITECH PROJECT, 2019
//
// File description:
//
*/

#ifndef MAIN_H_
#define MAIN_H_

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int my_isnum(char const c);
int atnum(char *a);
int calc(int nbr1, int nbr2, char c);
int how_many_operands(char *str);
char **make_compute_tab(char *str, char **compute_tab);
int has_operand(char *str);
int do_op(char **c_t);
int eval_expr(char *str);
static char  *get_expr(unsigned int size);
int main(int ac, char **av);
char *infin_add(char *number1, char *number2);
char *infin_sub(char *nbr1, char *nbr2);
int is_operand(char ch);
void my_swap_bis(char *a, char *b);
char *my_evil_str(char *str);
int my_getnbr(char const *src);
void my_putchar(char c);
int negative_change(int c);
int my_put_nbr(int c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_strcmp_multi(char *str1, char *str2);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
void my_swap(int *a, int *b);

#endif
