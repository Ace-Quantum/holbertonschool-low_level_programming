#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *r;

	while (s[i] != c)
		i++;

	r = s[i];
	return (r);
}
