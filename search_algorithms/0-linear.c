#include <stdio.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t return_index = 0;

    if (array == NULL)
        return (-1);

    while (return_index < size)
    {
        printf("Value checked array[%lu] = [%d]\n", return_index, array[return_index]);
        if (array[return_index] == value)
            return(return_index);
        return_index++;
    }
    return (-1);
}
