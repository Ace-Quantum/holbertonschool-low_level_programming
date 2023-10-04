#include "main.h"

/**
 * _strcat - concatinates strings
 *
 * @dest: beginning of string
 * @src: the end of string
 *
 * Return: return *dest_start
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (*dest_start);
}
