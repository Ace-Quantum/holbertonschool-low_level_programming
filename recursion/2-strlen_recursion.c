#include "main.h"

/**
 * _strlen_recursion - calls a recursive function
 * @s: a pointer to the string to measure
 * return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	return (RecursiveStrLen(s, x));
}

/**
 * RecursiveStrLen - recursively finds the strlen
 * @s: string to find length of
 * @x: the length of the string
 */

int RecursiveStrLen(char *s, int x)
{
	if (s[x] == '\0')
		return(x);

	x++;
	return (RecursiveStrLen(s, x));
}
