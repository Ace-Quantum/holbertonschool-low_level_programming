#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: determines how big the triangle is
 */

void print_triangle(int size)
{
	int i = 1;
	int hash = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (hash = 1; hash <= (size - i); hash++)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
