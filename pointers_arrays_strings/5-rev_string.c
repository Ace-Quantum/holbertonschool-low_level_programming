#include "main.h"

/**
 * rev_string - start of program
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j;
	char a[];

	while (s[i] != 0)
		i++;

	i = i - 1;
	j = 0;

	while (i >= 0)
	{
		a[j] = s[i];
		i--;
		j++;
	}

	s = a;
}
