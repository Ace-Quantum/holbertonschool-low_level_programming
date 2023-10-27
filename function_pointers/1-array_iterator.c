#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    while (i < size)
        (*action)(array[i]);
}