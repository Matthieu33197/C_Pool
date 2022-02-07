/*
** EPITECH PROJECT, 2019
** match
** File description:
** match string
*/

int match(char *s1, char *s2)
{
    int res1;
    int res2;
    int res;

    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s1 == '\0' || *s2 == '\0')
        return (0);
    if (*s1 == *s2)
        return (match(s1 + 1, s2 +1));
    if (*s2 == '*') {
        res1 = match(s1 + 1, s2);
        res2 = match(s1 + 1, s2 + 1);
        res = res1 || res2;
        return (res);
    }
    return (0);
}
