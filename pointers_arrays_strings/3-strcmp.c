#include "main.h"
#include "2-strlen.c"

/**
 * _strcmp - start of the program
 *
 * @s1: 1 string to compare
 * @s2: 2 string to compare
 *
 * Return: pos if long, neg if short, null if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
