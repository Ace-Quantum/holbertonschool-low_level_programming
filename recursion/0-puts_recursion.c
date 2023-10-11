#include "main.h"
#include "_strlen.c"

/**
 *
 */

void _puts_recursion(char *s)
{
	char *str = &s

	_putchar(str);
	str++;
	if (str != '\n')
		_puts_recursion(str);
}
