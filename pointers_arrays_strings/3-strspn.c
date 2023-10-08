#include "main.h"
#include "2-strlen.c"

/**
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int stlen = _strlen(s);
	int arlen = _strlen(accept);
	unsigned int r;
	int i;
	int j;
	int c = 0;

	for (i = 0 ; i <= stlen; i++)
	{
		for (j = 0 ; j <= arlen; j++)
		{
			if s[i] == accept[j]
			{
				c++;
				break;
			}
			if j == arlen
				return (r);
		}
	}
}
