#include "liblist.h"
#include <stdlib.h>

/*
 * This function adds an item at the begining
 * of the list.
 * It creates a new link and defines head as
 * its next value.
 */
void push_first(node_t **head, char *new_value)
{
    node_t *new_node;

    new_node = (node_t *)malloc(sizeof(node_t));
    new_node->value = new_value;
    new_node->next = *head;
    *head = new_node;
    return ;
}
