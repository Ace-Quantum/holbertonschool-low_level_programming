#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **array = malloc(nmemb);
	unsigned char *array_start = (unsigned char *)array;
	unsigned int i = 0;

	while (i < nmemb)
	{
		array_start = malloc(size);
		*array_start = 0;
		array_start++;
		i++;
	}

	return array;
}
