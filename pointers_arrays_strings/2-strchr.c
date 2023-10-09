#include "main.h"

/**
 * _strchr - starting point of the program
 *
 * @s: pointer to the string in question
 * @c: character to locate
 *
 * Return: pointer to the character that has been located
 */

char *_strchr(char *s, char c)
{
	char *r = (0);
	int i = 0;

	while (s[i] != c && s[i] != '\0')
		i++;

	if (s[i] == '\0')
		r = &s[i];

	return (r);
}
