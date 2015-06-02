#include <string.h>
#include <stdlib.h>

/*
 * This function removes an item from the list
 * using the value property of the link as a 
 * search query.
 * It only removes the first occurrence of the
 * keyword and returns it.
 * If the keyword doesn't exist in the list,
 * the function returns (null).
 */
char *pop_by_value(node_t **head, char *rm_value)
{
    int i;
    char *ret = NULL;

    i = 0;
    node_t *current = *head;
    node_t *temp_node = NULL;
    /* Case when rm_value is NULL */
    if (rm_value == NULL)
    {
        return (0);
    }
    /* Case when rm_value is the value of the first link */
    if (!strcmp((*head)->value, rm_value))
    {
        return (pop_first(head));
    }
    /* General case */
    while (strcmp(current->next->value, rm_value))
    {
        if (current->next->next == NULL)
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
