#include "liblist.h"
#include <stdlib.h>

/*
 * This function removes the first element of
 * the list and returns its value.
 */
char *pop_first(node_t **head)
{
    char *retval = NULL;
    node_t *next_node = NULL;

    if (*head == NULL)
    {
        return (0);
    }
    next_node = (*head)->next;
    retval = (*head)->value;
    free(*head);
    *head = next_node;

    return (retval);
}
