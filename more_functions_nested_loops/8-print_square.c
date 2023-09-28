#include "main.h"

/**
 * print_square - starting point of the script, which prints a square
 *
 * @size: determines the width of said square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
	if (size < 1)
		_putchar('\n');
}
