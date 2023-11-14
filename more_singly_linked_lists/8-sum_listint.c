#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        sum = sum + (*current).n;
        current = (*current).next;
    }
    
    return(sum);
}