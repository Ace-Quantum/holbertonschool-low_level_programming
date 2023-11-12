#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_list(list_t *head)
{
    list_t *leader;
    list_t *freer;

    if (head != NULL && (*head).next != NULL)
    {
        leader = head;
        freer = head;

        while (head != NULL)
        {
            leader = (*head).next;
            free((*freer).str);
            /*free((*freer).len);*/
            free((*freer).next);
            free(freer);
            freer = leader;
        }
    }
}