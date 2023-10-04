#include "main.h"
#include "2-strlen.c"
/**
 *_strncat - start of the function
 *
 * @dest: the string to be concated to, the start of the string
 * @src: the string to be concated
 * @n: the length of the string concat max
 * Return: return the same string as before
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
