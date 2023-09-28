#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: determines how big the triangle is
 */

void print_triangle(int size)
{
	int i = 0;
	int hash = 0;

	for (i <= size)
	{
		for (hash <= (size - i))
		{
			_putchar(' ');
			hash++;
		}
		for (hash <= size)
			_putchar('#');
		hash = 0;
		i++;
	}
}
