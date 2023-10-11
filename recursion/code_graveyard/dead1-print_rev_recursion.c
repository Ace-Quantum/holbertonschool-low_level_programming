#include "main.h"
#include "_strlen.c"

/**
 *
 */

void _print_rev_recursion(char *s)
{
	char *str = _end_string(*s);

	if (&str == &s)
		return;

	_putchar(*str);
	_print_rev
}

char *_end_string(char *e)
{
	char *str;

	if (*e == '\0')
		return(*str);

	*str++;
	_end_string(*str)
}
