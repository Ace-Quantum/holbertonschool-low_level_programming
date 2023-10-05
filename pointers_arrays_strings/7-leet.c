#include "main.h"

/**
 * leet - makes things cooler
 *
 * @str: the string to be made cooler
 * Return: a pointer to the newer cooler string
 */

char *leet(char *str)
{
	int low[5] = {97, 101, 111, 116, 108};
	int high[5] = {65, 69, 79, 84, 76};
	int leet[5] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;
	char *s = str;

	while (str[i] != '\0')
	{
		for (j = 0 ; j < 6; j++)
		{
			if (str[i] == low[j] || str[i] == high[j])
				str[i] = leet[j];
		}
	i++;
	}
	return (s);
}
