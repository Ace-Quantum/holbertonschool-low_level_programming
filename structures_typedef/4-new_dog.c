#include "dog.h"
#include "strdup.c"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	(*ndog).name = _strdup(name);
	(*ndog).owner = _strdup(owner);

	if ((*ndog).name == NULL || (*ndog).owner == NULL)
	{
		free(ndog);
		return (NULL);
	}

	(*ndog).age = age;

	return (ndog);
}
