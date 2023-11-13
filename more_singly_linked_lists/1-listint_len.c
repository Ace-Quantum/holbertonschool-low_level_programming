#include <stdio.h>
#include "main.h"

size_t listint_len(const listint_len *h)
{
    size_t counter;

    counter = 0;

    while (h != NULL)
    {
        counter++;
        h = (*h).next;
    }
    return(counter);
}