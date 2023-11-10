#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node = NULL;
    list_t *temp_node;

    new_node = malloc(sizeof(list_t));

    if (new_node == NULL)
        return (NULL);

    (*new_node).str = strdup(str);
    (*new_node).str = strlen(str);
    (*new_node).next = NULL;

    *temp_node = *head;

    while ((*temp_node).next != NULL)
        *temp_node = (*temp_node).next;

    (*temp_node).next = *new_node;

    return(*new_node);
}