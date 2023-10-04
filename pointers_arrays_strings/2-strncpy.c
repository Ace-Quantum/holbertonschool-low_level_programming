#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - start of the program
 *
 * @dest: where the string will be copied to
 * @src: the string to be copied
 * @n: the extent of copying to be done
 *
 * Return: return the slab
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
