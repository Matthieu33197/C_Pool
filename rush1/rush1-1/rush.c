/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

void x_nb(int x)
{
    int j;
    int t=x-2;

    my_putchar('o');
    for (j=1; j<=t; j++)
        my_putchar('-');
    if (x>1)
        my_putchar('o');
    if (j>=t)
        my_putchar('\n');
}

void y_nb(int x, int y)
{
    int j;
    int l_pipe=y-2;
    int space;

    x=x-2;

    for (space=1; space<=l_pipe; space++) {
        my_putchar('|');
        for (j=1; j<=x; j++)
            my_putchar(' ');
        if (x>=1)
            my_putchar('|');
        my_putchar('\n');
    }
}
  
int my_putstr(char const *str)
{
    int i=0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

void rush(int x, int y)
{
    char *str = "Invalid size";

    if (x<=0 || y<=0){
        my_putstr(str);
        my_putchar('\n');
    } else {
        x_nb(x);
        y_nb(x, y);
        if (y>1)
            x_nb(x);
    }
}

int main(void)
{
    rush(5,3);
}
