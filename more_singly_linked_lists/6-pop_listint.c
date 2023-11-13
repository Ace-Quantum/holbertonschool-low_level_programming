#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp_node = *head;

    data = (*temp_node).n;

    *head = NULL;

    return(data);
}