#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;
    int j = (int)size;

    while (i < size)
        (*action)(array[i]);
}