#include "main.h"

/**
 * print_diagonal - starting point of a program that prints
 *
 * @n: the number of lines to print
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		i++;
		j = 0;
		_putchar('\');
		_putchar('\n');
	}
}
