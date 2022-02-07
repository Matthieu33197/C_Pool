/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** atoi
*/

int compt_nb_numbers(char const *src)
{
    int i = 0;

    while (src[i] >= '0' && src[i] <= '9') {
        i++;
    }
    return (i);
}

int my_getnbr(char const *src)
{
    int i = 0;
    int s = 1;
    long nb = 0;
    int c = compt_nb_numbers(src);;

    if (src[i] == '+' || src[i] == '-') {
        while (src[i] == '+' || src[i] == '-') {
            if (src[i] == '-')
                s = -1 * s;
            i++;
        }
    }
    while (src[i] >= '0' && src[i] <= '9') {
        nb = (nb * 10) + src[i] - '0';
        i++;
    }
    if (nb * s >= -2147483648 && nb * s <= 2147483647 && c < 10)
        return (nb * s);
    return (0);
}
