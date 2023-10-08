#include "main.h"
#include "2-strlen.c"

/**
 *
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
