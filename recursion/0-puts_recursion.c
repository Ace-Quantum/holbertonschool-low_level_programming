#include "main.h"
#include "_strlen.c"

/**
 *
 */

void _puts_recursion(char *s)
{
	if (str == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
}
