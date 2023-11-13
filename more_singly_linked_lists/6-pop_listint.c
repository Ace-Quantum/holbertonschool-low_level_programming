#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    int data;

    data = (*head).n;

    *head = NULL;

    return(data);
}