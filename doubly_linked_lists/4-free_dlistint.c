#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * betty
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *freer = head;

    while ((*freer).next != NULL)
    {
        freer = (*freer).next;
        free((*freer).prev);
    }

    free(freer);
}
