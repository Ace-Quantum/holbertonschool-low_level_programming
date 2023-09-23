#include "main.h"

/**
 * print_alphabet_X10 - Program start
 *
 * Return: void
 */

void print_alphabet_X10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10 ; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
