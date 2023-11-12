#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_list(list_t *head)
{
    list_t *leader = head;
    list_t *freer;

    freer = head;

    while (leader != NULL)
    {
        freer = leader;
        leader = (*leader).next;
        free((*freer).str);
        /*free((*freer).len);*/
        free((*freer).next);
        free(freer);
    }
}
