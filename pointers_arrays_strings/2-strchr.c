#include "main.h"

/**
 *
 */

char *_strchr(char *s, char c)
{
	char *r;

	while (s != c)
		s++;

	r = s;
	return (r);
}
