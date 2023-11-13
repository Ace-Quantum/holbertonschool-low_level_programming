#include <stdio.c>
#include <stdlib.c>
#include "main"

int pop_listint(listint_t **head)
{
    int data;

    data = (*head).n;

    *head = NULL;

    return(data);
}