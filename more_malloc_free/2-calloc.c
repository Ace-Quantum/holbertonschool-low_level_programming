#include <stdio.h>
#include <stdlib.h>
#include "memset.c"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	memset(ptr, 0, nmemb * size);

	return *ptr;
}
