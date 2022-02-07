/*
** EPITECH PROJECT, 2020
** params to list
** File description:
** params to list
*/

linked_list_t *my_params_to_list(int ac, char **av)
{
    linked_list_t *list;

    list = NULL;
    for(int i = 0; i < ac; i++) {
    	list = add_to_list(av[i], list)
    }
    return (list);
}