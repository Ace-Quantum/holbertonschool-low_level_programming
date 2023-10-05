#include "main.h"

char *cap_string(char *str)
{
	int sep[11] = {44, 59, 46, 33, 63, 34, 40, 41, 32, 9, 10};
	int i = 0;
	int j;
	char *s = str;

	while (str[i] != '\0')
	{
		for (j = 0; j < 11; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] > 96 && str[i] < 123)
					str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
