#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i = 0;
    int j = (int)size;

    if (array == NULL || size == NULL)
        return;
    
    while (i < j)
    {
        (*action)(array[i]);
        i++;
    }
}