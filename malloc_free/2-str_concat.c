#include <stdio.h>
#include <stdlib.h>
#include "_strlen.c"

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int j = 0;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	array = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (array == NULL)
		return(NULL);

	for (i = 0; i < _strlen(s1); i++)
		array[i] = s1[i];

	for (i = _strlen(s1); i < _strlen(s1) + _strlen(s2); i++)
	{
		array[i] = s2[j];
		j++;
	}

	array[_strlen(s1) + _strlen(s2) + 1] = '\0';

	return (array);
}
