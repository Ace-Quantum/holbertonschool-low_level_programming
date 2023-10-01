#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - start of program, prints latter half of string
 *
 * @str: string to print latter half of
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len - 1) / 2;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
}
