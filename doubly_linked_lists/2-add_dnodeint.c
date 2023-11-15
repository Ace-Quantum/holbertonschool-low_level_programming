#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Betty lies here
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL;

    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    (*new_node).n = n;

    if (*head == NULL)
    {
        (*new_node).next = NULL;
        (*new_node).prev = NULL;
        *head = new_node;
        return (new_node);
    }

    (*head)->prev = new_node;
    (*new_node).next = *head;
    (*new_node).prev = NULL;
    *head = new_node;

    return (new_node);
}