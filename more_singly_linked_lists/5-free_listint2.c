#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *leader;
    listint_t *freer = *head;

    while (freer != NULL)
    {
        leader = (*freer).next;
        free(freer);
        freer = leader;
    }

    *head = NULL;
}