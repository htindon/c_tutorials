#include "liblist.h"
#include <stdlib.h>

/*
 * This function initializes a list and sets
 * it's first link's value to the content of 
 * the argument passed to the function.
 */

node_t  *init_list(char *first_value)
{
    node_t      *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    if (!first_value)
    {
        return (0);
    }
    head->value = first_value;
    head->next = NULL;
    return (head);
}
