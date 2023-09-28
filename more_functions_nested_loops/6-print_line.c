#include "main.h"

/**
 * print_line - Start of a script to print a line
 *
 * @n: determines how many lines to print
 */

void print_line(int n)
{
	int i;

	for (i = 1; i > n ; i++)
		_putchar('_');
	_putchar('\n');
}
