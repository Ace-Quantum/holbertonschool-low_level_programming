#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t.*h)
{
    size_t counter;

    counter = 0;

    while (h != NULL)
    {
        printf("%d", (*h).n);
        counter++;
    }
    return(counter);
}