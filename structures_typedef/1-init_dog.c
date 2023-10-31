#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - beginning of the program
* 
* @d: the dogs
* @name: name for dog
* @age: age for dog
* @owner: owner for the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
