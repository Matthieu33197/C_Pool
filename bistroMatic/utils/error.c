/*
** EPITECH PROJECT, 2019
** error
** File description:
** if error
*/

int error(int ac, char **av)
{
    int i = 0;
    
    while (av[2][i] != '\0') {
        if (av[2][i] <= '0' || av[2][i] >= '9') {
            if (av[2][i + 1] <= '0' || av[2][i + 1] >= '9')
                write(2, "syntax error\n", 13);
            return (84);
        }
        if (av[2][i] == ' ' && av[2][i + 1] == ' ') {
            write(2, "syntax error\n", 13);
                return (84);
        }
    }
}
