#include "main.h"

/**
 *
 */

char *leet(char *str)
{
	int low[5] = {97, 101, 111, 116, 108};
	int high[5] = {65, 69, 79, 84, 76};
	int leet[5] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0 ; j < 6; j++)
		{
			if (str[i] = low[j] || stri[i] = high[j])
				str[i] = leet[j];
		}
	i++;
	}
}
