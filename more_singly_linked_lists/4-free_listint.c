#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

{
    listint_t *leader;
    listint_t *freer = head;

    while (freer != NULL)
    {
        leader = (*freer).next;
        free(freer);
        freer = leader;
    }
}