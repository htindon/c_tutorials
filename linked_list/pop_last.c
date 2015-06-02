#include "liblist.h"
#include <stdlib.h>

/*  
 * This function removes the last item of
 * the list and returns its value.
 */ 
char *pop_last(node_t *head)
{   
    node_t  *current;
    char    *ret; 

    current = head->next;
    while (current->next != NULL)
    {
        head = current;
        current = current->next;
    }
    ret = current->value;
    free(head->next);
    head->next = NULL;
    return (ret);
}
