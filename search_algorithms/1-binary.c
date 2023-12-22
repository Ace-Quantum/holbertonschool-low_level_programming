#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches an array binarily
 *
 * @array: the array to search through
 * @size: size of the array
 * @value: the value to look for
 *
 * Return: the index with the thing
*/

int binary_search(int *array, size_t size, int value)
{
	size_t idx, minidx = 0, maxidx = size - 1, i;

	if (array == NULL)
		return (-1);

	while (minidx <= maxidx)
	{
		idx = minidx + (maxidx - minidx) / 2;
		printf("Searching in array: ");

		for (i = minidx; i <= maxidx; i++)
		{
			if (i > minidx)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (minidx == maxidx && array[idx] != value)
			return (-1);

		if (array[idx] == value)
			return (idx);

		if (array[idx] < value)
			minidx = idx + 1;
		else
			maxidx = idx - 1;
	}
	return (-1);
}
