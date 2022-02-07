/*
** EPITECH PROJECT, 2019
** btree_create_node
** File description:
** allocates a new node
*/

#include <stdlib.h>
#include "btree.h"
#include <stdio.h>

btree_t *btree_create_node(void *item)
{
    btree *node;

    node->item = item;
    node->left = 0;
    node->right = 0;
    return (node);
}

int main(void) {
    int item = 6;
    
    item = btree_create_node(item);
    printf("%s\n", item);
    return (0);
}
