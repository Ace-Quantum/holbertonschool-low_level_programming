#include "main.h"

/**
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && *src != n)
		dest++ = src++;
	*dest = '\0';
	return (dest_start);
}
