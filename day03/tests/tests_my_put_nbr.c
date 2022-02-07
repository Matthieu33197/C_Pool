/*
** EPITECH PROJECT, 2019
** tests_my_put_nbr
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}
int main(void)
{
    my_put_nbr(2147483647);
    my_put_nbr(-2147483647);
    my_put_nbr(-24);
    my_put_nbr(34);
    my_put_nbr(0);
    return (0);
}
