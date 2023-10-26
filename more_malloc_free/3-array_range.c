#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *new_array;
	int i, j, diff;

	j = min;
	diff = (max - min);

	if (diff < 0)
		return (NULL);

	new_array = malloc((diff + 1) * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	for (i = 0, j = min; i <= diff; i++, j++)
		new_array[i] = j;

	return(new_array);
}
