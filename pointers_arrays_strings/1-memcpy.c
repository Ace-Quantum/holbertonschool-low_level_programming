#include "main.h"

/**
 * _memcpy - copies memory to another place of memory
 *
 * @dest: where the memory gets copied to
 * @src: string to copy
 * @n: Amount to copy
 *
 * Return: return the start of the copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (s);
}
