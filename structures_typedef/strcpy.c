#include "main.h"

/**
 * *_strcpy - starting point of the prototype
 *
 * @dest: The pointer to which src will be copied.
 *
 * @src: the string to be copied
 *
 * Return: The starting pointer for dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
