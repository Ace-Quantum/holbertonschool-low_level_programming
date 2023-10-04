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
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	if (len1 > len2)
		return (1);
	else if (len2 > len1)
		return (-1);
	else if (len1 == len2)
		return (0);
}
