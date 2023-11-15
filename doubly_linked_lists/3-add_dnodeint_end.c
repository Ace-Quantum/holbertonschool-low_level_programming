#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Betty here
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL;
    dlistint_t *temp_node;
    
    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULLL)
        return (NULL);

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    temp_node = *head;

    while ((*temp_node).next != NULL)
        temp_node = (*temp_node).next;

    (*temp_node).next = new_node;
    (*new_node).prev = temp_node;

    return (new_node);
}
