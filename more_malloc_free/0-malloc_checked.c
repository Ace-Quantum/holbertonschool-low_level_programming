#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks for space to be allocated
 * @b: the amount to check for
 * Return: return a pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
