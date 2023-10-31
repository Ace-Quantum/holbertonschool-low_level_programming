#ifndef dog_h
#define dog_h

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - the file for a dog
* @name: Name of dog
* @age: age of dog
* @owner: Owner of dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

char *_strdup(char *str);

int _strlen(char *s);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif