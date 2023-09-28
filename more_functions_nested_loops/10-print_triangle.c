#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: determines how big the triangle is
 */

void print_triangle(int size)
{
	int i = 1;
	int hash = 0;

	while (i <= size)
	{
		while (hash <= (size - i + 1))
		{
			_putchar(' ');
			hash++;
		}
		while (hash <= size)
		{
			_putchar('#');
			hash++;
		}
		hash = 0;
		i++;
		_putchar('\n');

	}
	if (size < 1)
		_putchar('\n');
}
