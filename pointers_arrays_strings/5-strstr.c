#include "main.h"
#include "2-strlen.c"

/**
 * _strstr - starting point of endless loops
 *
 * @haystack: the string to search for a string within
 * @needle: the string to search for
 *
 * Return: the pointer where it all starts or return nothing
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int lenha = _strlen(haystack);
	int lenne = _strlen(needle);
	char *r = '\0';

	while (i < lenha)
	{
		if (haystack[i] == needle[j])
		{
			r = &haystack[i];
			while (j < lenne)
			{
				if (haystack[i] == needle[j])
				{
					if (j == lenne)
						return (r);
					i++;
					j++;
				}
				else
				{
					r = '\0';
					j = 0;
					break;
				}
			}
		}
		i++;
	}

	return (r);
}
