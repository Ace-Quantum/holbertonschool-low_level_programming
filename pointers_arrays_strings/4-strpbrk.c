#include "main.h"
#include "2-strlen.c"

/**
 * _strpbrk - starting point of the program
 *
 * @s: string to be searched
 * @accept: array to search through
 *
 * Return: return a pointer to the point where the pointer points
 */

char *_strpbrk(char *s, char *accept)
{
	char *r = '\0';
	int i = 0;
	int j = 0;
	int lens = _strlen(s);
	int lena = _strlen(accept);

	for (i < lens; i++)
	{
		for (j < lena; j++)
		{
			if (s[i] == accept[j])
			{
				r = s[i];
				return (r);
			}
		}
	}

	return (r);
}
