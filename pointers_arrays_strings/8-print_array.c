#include "main.h"

/**
 * print_array - starting point of printing a certain number of values
 *
 * @a: array to be printed
 *
 * @n: amount of elements to print
 */

void print_array(int *a, int n)
{
	while (a[n] != 0)
	{
		_putchar(a[n] + '0');
		if (a[n + 1] == 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
