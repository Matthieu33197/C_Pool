/*
** EPITECH PROJECT, 2019
** tree.c
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

int tronc(int size)
{
    int nbbarre = 1;
    int nbbarrev = 1;
    while(nbbarrev <= size) {
        while(nbbarre <= size) {
            my_putchar('|');
            nbbarre++;
        }
        my_putchar('\n');
        nbbarrev++;
        nbbarre = 1;
    }
}

int norme(int j, int nb_e)
{
    int r = 0;
    int k = 3;

    for (j = 1; j <= nb_e; j++) {
        my_putchar('*');
    }
    return (nb_e);
}

int etoile(int size)
{
    int i;
    int j;
    int nb_e = 1;
    int k = 5;
    int l = 1;
    int esp = nb_e;
    
    while (l <= size) {
        for (i = 1; i < k; i++) {
            norme(j, nb_e);
            nb_e += 2;
            my_putchar('\n');
        }
        nb_e -= 2;
        k += 1;
        l++;
    }
}

void tree(int size)
{
    if (size == 1) {
        write(1,"   *\n", 6);
        write(1,"  ***\n", 7);
        write(1," *****\n", 8);
        write(1,"*******\n", 9);
        write(1,"   |",4);
        
    } else {
        etoile(size);
        tronc(size);
    } 
}

int main(void)
{
    tree(1);
    return (0);
}
