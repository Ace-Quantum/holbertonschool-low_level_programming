#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = NULL;

    new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);

    (*new_node).n = n;

    (*new_node).next = *head;
    *head = new_node;

    return(*head);
}