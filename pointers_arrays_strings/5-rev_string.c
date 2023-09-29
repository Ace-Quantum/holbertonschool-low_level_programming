#include "main.h"

/**
 * rev_string - start of program
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i, j;
	char a;

	for (i = 0, j = len -1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}
