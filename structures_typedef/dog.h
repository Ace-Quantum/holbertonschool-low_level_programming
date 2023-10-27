#include <stdlib.h>
#include <stdio.h>

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
