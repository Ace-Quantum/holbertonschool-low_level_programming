#include "dog.h"
#include "strcpy.c"
#include "_strlen.c"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - a new dog to add
*
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: the pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	(*ndog).name = malloc(_strlen(name) + 1);

	if ((*ndog).name == NULL)
	{
		free((*ndog).name);
		free(ndog);
		return (NULL);
	}

	(*ndog).owner = malloc(_strlen(owner) + 1);

	if ((*ndog).owner == NULL)
	{
		free((*ndog).owner);
		free(ndog);
		return (NULL);
	}

	(*ndog).name = _strcpy((*ndog).name, name);
	(*ndog).owner = _strcpy((*ndog).owner, owner);
	(*ndog).age = age;

	return (ndog);
}
