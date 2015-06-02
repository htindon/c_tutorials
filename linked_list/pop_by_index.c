#include "liblist.h"
#include <stdlib.h>

/*  
 * This function removes a specific item
 * 1. Iterate to the node before the node we wish to delete
 * 2. Save the node we wish to delete in the temporary pointer
 * 3. Set the previous node's next pointer to point to the node
 * after the node we wish to delete
 * 4. Delete the node using the temporary pointer
 */
char *pop_by_index(node_t **head, int n)
{
    int i;
    char *ret = NULL;

    i = 0;
    node_t *current = *head;
    node_t *temp_node = NULL;
    if (n == 0)
    {
        return (pop_first(head));
    } 
    while (i < n - 1) 
    {
        if (current->next == NULL)
        {
            return (0);
        }
        current = current->next;
        i++;
    }   
    temp_node = current->next;
    ret = temp_node->value;
    current->next = temp_node->next;
    free(temp_node);
    return (ret);
}

