#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *freer = NULL;
    dlistint_t *leader = NULL;

    unsigned int counter = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        freer = *head;
        *head = (**head).next;
        (*head)->prev = NULL;
        free(freer);
        return (1);
    }

    leader = *head;

    while (counter != index - 1)
    {
        if (leader == NULL)
            return (-1);
        leader = (*leader).next;
        counter++;
    }

    freer = (*leader).next;

    if ((*freer).next != NULL)
    {
        (*leader).next = (*freer).next;
        leader->next->prev = leader;
    }
    else
        leader->next = NULL;

    free(freer);
    return (1);
}
