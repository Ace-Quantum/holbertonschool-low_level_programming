#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Betty here
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t len = 0;

    while (h != NULL)
    {
        printf("%d\n", (*h).n);
        h = (*h).next;
        len++;
    }
    return (len);
}