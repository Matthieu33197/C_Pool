/*
** EPITECH PROJECT, 2019
** my_print_comb2 
** File description:
** 
*/

#include <unistd.h>

int writeput(int nbr, int nbr1)
{
    int a = nbr/10;
    int b = nbr%10;
    int c = nbr1/10;
    int d = nbr1%10;
    
    my_putchar(a + '0');
    my_putchar(b + '0');
    my_putchar(' ');
    my_putchar(c + '0');
    my_putchar(d + '0');
    if (nbr != 98 || nbr1 != 99) {
        my_putchar(',');
        my_putchar(' ');
        return (0);
    }
}

int my_print_comb2(void)
{
    int nbr = 00;
    int nbr1 = 01;

    while (nbr1 < 99) {
        while (nbr1 <= 99) {
            writeput(nbr, nbr1);
            nbr1++;
        }
        nbr++;
        nbr1 = nbr + 1;
        if (nbr == 98 && nbr1 == 99)
            writeput(nbr, nbr1);
    }
}
