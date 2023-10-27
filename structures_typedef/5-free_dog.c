#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	(*d).age = 0;
	free(d);
	return;
}
