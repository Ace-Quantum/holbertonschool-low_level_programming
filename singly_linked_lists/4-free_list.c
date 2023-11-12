#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_list(list_t *head)
{
    list_t *leader;
    list_t *freer = head;

    while (freer != NULL)
    {
        leader = (*freer).next;
        free((*freer).str);
        /*free((*freer).len);*/
        free(freer);
        freer = leader;
    }
}
