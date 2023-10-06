#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	char *r;
	int i = 0;

	while (s[i] != c && s[i] != 0)
		i++;

	if (s[i] != 0)
		r = &s[i];
	else
		r = 0;

	return (r);
}
