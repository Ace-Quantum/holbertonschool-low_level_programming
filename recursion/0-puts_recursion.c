#include "main.h"
#include "_strlen.c"

/**
 * _puts_recursion - Prints a string character by character.
 *
 * @s: the string to print
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
