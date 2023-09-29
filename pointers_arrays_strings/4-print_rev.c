#include "main.h"

/**
 * print_rev - starting point of the code
 *
 * @s: string to be reverse printed
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n')
}
