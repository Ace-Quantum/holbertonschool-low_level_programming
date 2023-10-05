#include "main.h"

/**
 *
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;
	char *r = *s;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (r);
}
