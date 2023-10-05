#include "main.h"

/**
 *
 */

char *cap_string(char *str)
{
	int i = 0;
	char *s = str;

	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
				while ((str[i] > 96 && str [i] <123) || (str[i] > 64 && str[i] < 91))
					i++;
			}
		}
		i++;
	}
	return (s);
}
