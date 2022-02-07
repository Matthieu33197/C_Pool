/*
** EPITECH PROJECT, 2019
** rush1-5
** File description:
** 
*/

void x_nb1(int x, int y)
{
    int nb_b=x-2;

    if (y==1)
        nb_b=x;
    else if (x==1)
        nb_b=y;
    if (y>1 && x>1)
        my_putchar('A');
    for (int j=1; j<=nb_b; j++) {
        my_putchar('B');
        if (x==1)
            my_putchar('\n');
    }
    if (y>1 && x>1) {
        my_putchar('C');
        my_putchar('\n');
    }
}

void x_nb2(int x, int y)
{
    if (y>1 && x>1) {
        my_putchar('C');
    }
    for (int j=1; j<=x-2; j++)
        my_putchar('B');
    if (y>1 && x>1) {
        my_putchar('A');
        my_putchar('\n');
    }
}


void y_nb(int x, int y)
{
    int nb_b=y-2;

    if (x==1)
        nb_b=0;
    for (int space=1; space<=nb_b; space++) {
        my_putchar('B');
        for (int j=1; j<=x-2; j++) {
            my_putchar(' ');
        }
        my_putchar('B');
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

    if (x<0 || y<0){
        my_putstr(str);
        my_putchar('\n');
    } else {
        x_nb1(x, y);
        y_nb(x, y);
        if (y>1)
            x_nb2(x, y);
    }
}
