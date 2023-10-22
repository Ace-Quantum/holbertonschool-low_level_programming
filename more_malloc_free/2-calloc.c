#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	(void)size;
	void *array;
	unsigned char *array_start = (unsigned char *)array;
	unsigned int i = 0;

	array = malloc(nmemb);

	while (i < nmemb)
	{
		*array_start = 0;
		array_start++;
		i++;
	}

	return array;
}
