#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - starting point of the search program
 *
 * @s: string to search
 * @accept: acceptable letters
 *
 * Return: number of letters that fit before one doesn't
 */

unsigned int _strspn(char *s, char *accept)
{
	int stlen = _strlen(s);
	int arlen = _strlen(accept);
	unsigned int r = 0;
	int i;
	int j;

	for (i = 0 ; i <= stlen; i++)
	{
		for (j = 0 ; j <= arlen; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
			if (j == arlen)
				return (r);
		}
	}
	return (r);
}
