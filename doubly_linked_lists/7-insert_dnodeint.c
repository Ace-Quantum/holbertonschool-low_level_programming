#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *new_node;
    dlistint_t *tracker_node = *head;

    new_node = malloc(sizeof(dlistint_t));

    (*new_node).n = n;

    if (idx == 0)
    {
        (*new_node).next = *head;
        (*new_node).prev = NULL;
        *head = new_node;
        return (new_node);
    }

    while (tracker_node != NULL && i < idx - 1)
    {
        i++;
        tracker_node = (*tracker_node).next
    }

    if (tracker_node == NULL)
    {
        free(new_node);
        return (NULL);
    }

    (*new_node).next = (*tracker_node).next;
    (*new_node).prev = tracker_node;
    (*tracker_node).next = new_node;
    tracker_node = (*new_node).next;
    (*tracker_node).prev = new_node;

    return (new_node);
}