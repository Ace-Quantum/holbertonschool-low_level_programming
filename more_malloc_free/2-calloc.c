#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **array = malloc(nmemb * sizeof(void *));
	unsigned int i = 0;

	while (i < nmemb)
	{
		array[i] = malloc(size);
		_memset(array[i], 0, nmemb * size);
		i++;
	}

	return array;
}
