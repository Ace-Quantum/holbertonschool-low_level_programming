#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmeb, unsigned int size)
{
	int nnmeb = (int)nmeb;
	int ssize = (int)size;
	int i = 0;

	void **array = (void **)malloc(nnmeb * sizeof(void *));

	while (i < nnmeb)
	{
		array[i] = malloc(ssize);
		i++;
	}

	i = 0;

	while (i <nnmeb)
	{
		((unsigned char *)array)[i] = 0;
		i++;
	}

	return (array);
}
