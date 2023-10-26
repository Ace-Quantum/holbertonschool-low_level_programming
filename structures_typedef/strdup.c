#include <stdio.h>
#include <stdlib.h>
#include "_strlen.c"
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string in question to duplicate
 *
 * Return: the newly made array to the newly duplicated string
 */

char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
		return (NULL);

	array = malloc(_strlen(str) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str) + 1; i++)
		array[i] = str[i];

	array[_strlen(str) + 1] = '\0';

	return (array);
}
