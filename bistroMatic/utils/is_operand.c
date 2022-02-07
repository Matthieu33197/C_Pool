/*
** EPITECH PROJECT, 2019
** is operand
** File description:
** operand
*/

int is_operand(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return (1);
    return (0);
}
