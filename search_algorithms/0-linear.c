#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches an array linearly
 * 
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value looking for
 * 
 * Return: the index with the array's val that we want
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
