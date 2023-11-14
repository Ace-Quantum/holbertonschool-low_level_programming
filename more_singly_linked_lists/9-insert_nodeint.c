#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    listint_t *new_node;
    listint_t *tracker_node = *head;

    new_node = malloc(sizeof(listint_t));

    if (new_node = NULL)
        return (NULL);

    (*new_node).n = n;

    while (tracker_node != NULL)
    {
        if (i == idx)
        {
            (*new_node).next = (*tracker_node).next;
            (*tracker_node).next = new_node;
            return (new_node);
        }
        i++;
        tracker_node = (*tracker_node).next;
    }
    return (NULL);
}