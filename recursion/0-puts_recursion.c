#include "main.h"
#include "_strlen.c"

/**
 *
 */

void _puts_recursion(char *s)
{
	int x = 0;

	_putchar(s[x]);
	x--;
	if (x < _strlen(s) - 1)
		_puts_recursion(s);
}
