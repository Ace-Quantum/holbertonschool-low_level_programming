#include "main.h"

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
