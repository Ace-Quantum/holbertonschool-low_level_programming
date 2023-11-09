#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t len;

    len = 0;

    while(h != NULL)
    {
        if ((*h).str == NULL)
            printf("[%d] %s\n", 0, (*h).str);
        else
            printf("[%d] %s\n", (*h).len, (*h).str);
        h = (*h).next;
    }
    return (len);
}