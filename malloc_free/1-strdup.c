#include <stdio.h>
#include <stdlib.h>
#include "_strlen.c"

char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
		return(NULL);

	array = malloc(_strlen(str) + 1);

	if (array == NULL)
		return(NULL);

	for (i = 0; i < _strlen(str) + 1; i++)
		array[i] = str[i];

	array[_strlen(str) + 1] = '\0';

	return (array);
}
