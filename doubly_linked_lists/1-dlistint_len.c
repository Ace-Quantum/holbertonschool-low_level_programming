#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Betty goes here
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        num_nodes++;
        h = (*h).next;
    }
    return (num_nodes);
}
