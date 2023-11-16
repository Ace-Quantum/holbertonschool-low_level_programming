#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Betty
*/

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        sum = sum + (*current).n;
        current = (*current).next;
    }

    return (sum);
}
