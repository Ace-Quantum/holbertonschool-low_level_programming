#include "function_pointers.h"
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int test;
    int i = 0;

    if (size == 0)
        return (-1);

    while (i < size)
    {
        test = (*cmp)(array[i]);

        if (test != 0)
            return(i);
        else
            i++;
    }

    return (-1);
}