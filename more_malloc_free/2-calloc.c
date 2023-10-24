#include <stdio.h>
#include <stdlib.h>
#include "memset.c"

/**
 * _calloc - assigns big space and sets to zero
 * @nmemb: one part of the space needed
 * @size: the other part of the space needed
 * Return: a pointer to the space allocated, just like in malloc, only with 0s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
