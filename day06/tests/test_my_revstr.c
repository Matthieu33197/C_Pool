/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** criterion
*/

#include <criterion/criterion.h>

Test(my_revstr, copy_reverse_string)
{
    char str[] = "hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleh");
}
