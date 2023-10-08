#include "main.h"
#include "2-strlen.c"

/**
 *
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
