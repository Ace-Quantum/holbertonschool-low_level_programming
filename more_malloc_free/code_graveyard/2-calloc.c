#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmeb, unsigned int size)
{
	int nnmeb = (int)nmeb;
	int ssize = (int)size;
	int i = 0;

	char *array = malloc(nmeb * size);

	while (i < nnmeb)
	{
		array[i] = 0;
		i++;
	}

	i = 0;

	while (i < nnmeb)
	{
		array[i] = malloc(ssize);
		i++;
	}

	return (array);
}
