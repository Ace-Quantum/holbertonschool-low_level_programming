#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	char *r;
	int i = 0;

	while (s[i] != c)
		i++;

	r = &s[i];
	return (r);
}
