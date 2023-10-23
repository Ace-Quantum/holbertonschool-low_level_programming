#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a two dimensional space (I think this is what I was trying to do with calloc)
 * @width: the width of the array
 * @height: the height of the array
 * Return: return the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
