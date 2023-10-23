#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - makes an array
 * @size: the size to make the array
 * @c: the value initialized
 *
 * Return: the array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0';

	return (array);
}
