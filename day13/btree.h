/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#ifndef __BTREE_H__
#define __BTREE_H__

typedef  struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

#endif
