#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	char *r = '\0';
	int i = 0;

	while (s[i] != c && s[i] != 0)
		i++;

	if (s[i] != 0)
	{
		r = &s[i];
		return (r);
	}
	else
		return (r);
}
