#include "main.h"
#include "_strlen.c"

/**
 *
 */

void _puts_recursion(char *s)
{
	char *str = s;

	_putchar(str);
	str = str[1];
	if (str != '\n')
		_puts_recursion(str);
}
