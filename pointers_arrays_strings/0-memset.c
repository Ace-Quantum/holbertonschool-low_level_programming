#include "main.h"

/**
 * _memset - start of code to reassign memory
 *
 * @s: pointer to the code to be rewritten
 * @b: character to rewrite
 * @n: amount of memory to go through
 *
 * Return: the begining of the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *r = s;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (r);
}
