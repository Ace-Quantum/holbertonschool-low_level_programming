#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator - iterates through an array
* @array: the array to iterate through
* @size: the size of the array
* @action: the function to call
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int j = (int)size;

	if (array == NULL || action == NULL)
		return;

	while (i < j)
	{
		(*action)(array[i]);
		i++;
	}
}
