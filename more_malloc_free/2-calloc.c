#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = malloc(nmemb);
	unsigned char *array_start = (unsigned char *)array;
	unsigned int i = 0;

	while (i < size)
	{
		array_start[i] = malloc(size);
		array_start[i] = 0;
		i++;
	}

	return array;
}
