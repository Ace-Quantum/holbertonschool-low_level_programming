#include "main.h"

/**
 * rev_string - start of program
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = _strlen(s);
	int j;
	char a;

	j = 0;

	while (i >= 0)
	{
		a[j] = s[i];
		i--;
		j++;
	}

	s = a;
}
