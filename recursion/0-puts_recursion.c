#include "main.h"
#include "_strlen.c"

/**
 * _puts_recursion - starting point of the code. Prints a string character by character.
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
