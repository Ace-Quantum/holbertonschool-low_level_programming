#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - initialize an index
* @array: the index to initialize
* @size: the size of the array
* @cmp: the comparison
* Return: return the number where the initialization stops
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int test;
	int i = 0;

	if (size == 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		test = (*cmp)(array[i]);

		if (test != 0)
			return (i);

		i++;
	}

	return (-1);
}
