#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmeb, unsigned int size)
{
	int nnmeb = (int)nmeb;
	int ssize = (int)size;
	int i = 0;

	void *array;

	for (i <= nnmeb)
	{
		array[i] = malloc(ssize);
		i++;
	}

	return (array);
}
