#include "main.h"

/**
 * print_alphabet_x10 - Program start
 *
 * Return: void
 */

void print_digit(int n)
{
	if (n < 10)
	{
		_putchar('0');
	}
	putchar(n + '0');
}

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h < 24 ; h++)
	{
		for (m = 0; m < 60 ; m++)
		{
			print_digit(h / 10);
			print_digit(h % 10);
			_putchar(':');
			print_digit(m / 10);
			print_digit(m % 10);
			_putchar('\n');
		}
	}
}

