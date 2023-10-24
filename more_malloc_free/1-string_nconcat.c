#include <stdio.h>
#include <stdlib.h>
#include "_strlen.c"

/**
 * string_nconcat - concatinates a string with the first part of another string
 * @s1: string one
 * @s2: string two
 * @n: the amount of string two to concatinate
 * Return: return the slab
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0;
	int j = 0;
	int nn = (int)n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (nn > _strlen(s2))
		nn = _strlen(s2);

	str = malloc(_strlen(s1) + nn + 1);

	if (str == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}

	while (i < (_strlen(s1) + nn))
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';

	return (str);
}
