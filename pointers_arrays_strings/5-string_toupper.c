#include "main.h"

/**
 * string_toupper - converts lowercase letters into upper case
 *
 * @str: string to be converted
 * Return: the start of the string
 */

char *string_toupper(char *str)
{
	int i = 0;
	char *s = str;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}

	return (s);
}
