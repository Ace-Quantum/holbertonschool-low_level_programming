#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	void *array_start;
	int i = 0;

	array = malloc(nmemb * size);

	while (i < size)
	{
		array_start = malloc(size);
		array_start = 0;
		array[i] = array_start;
		array_start ++;
		i++;
	}

	return (array)
}
