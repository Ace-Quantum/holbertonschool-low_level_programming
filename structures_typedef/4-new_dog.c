#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	(*ndog).name = _strdup(name);
	(*ndog).owner = _strdup(owner);
	(*ndog).age = age;

	if ((*ndog).name == NULL || (*ndog).owner == NULL)
		return (NULL);

	return (ndog);
}
