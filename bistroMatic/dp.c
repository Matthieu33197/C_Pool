/*
** EPITECH PROJECT, 2019
** evalepr
** File description:
** direction la bistrot
*/

#include "include.h"

int how_many_operands(char *str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (is_operand(str[i]))
            count++;
    return (count);
}

char **make_compute_tab(char *str, char **compute_tab)
{
    int k = 0;
    int j = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-' || str[i] == '+')
            compute_tab[++j][0] = str[i++], j++, k = 0;
        if (str[i] == '(') {
            i++;
            for (;str[i] != ')'; i++)
                compute_tab[j][k++] = str[i];
            k = 0;
        } else
            compute_tab[j][k++] = str[i];
    }
    compute_tab[j + 1] = NULL;
}

int has_operand(char *str)
{
    for (int i = 0; str[i]; i++)
        if (is_operand(str[i]))
            return (1);
    return (0);
}

int do_op(char **c_t)
{
    int num = 0;

    for (int i = 0; c_t[i + 2];){
        if (has_operand(c_t[i]))
            num += eval_expr(c_t[i++]);
        else {
            num += calc(atnum(c_t[i]), atnum(c_t[i + 2]), c_t[i + 1][0]);
            i += 3;
        }
    }
    return (num);
}

int eval_expr(char *str)
{
    int size = how_many_operands(str) * 2 + 1;
    char **compute_tab = malloc(sizeof(char *) * size);

    for (int i = 0; i < size; i++){
        compute_tab[i] = malloc(sizeof(char) * 5);
    }
    compute_tab[size] = NULL;
    make_compute_tab(str, compute_tab);
    return (do_op(compute_tab));
}
