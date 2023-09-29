#include "main.h"

/**
 * _puts - start of the program, prints out a string
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i] + '0');
		i++;
	}
	_putchar('\n');
}
