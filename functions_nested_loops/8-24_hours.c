#include "main.h"

/**
 * jack_bauer - Program start
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; a < 3 ; a++)
	{
		for (b = 0; b < 4 ; b++)
		{
			for (c = 0; c < 6 ; c++)
			{
				for (d = 0; d < 10 ; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
			d = 0;
		}
		c = 0;
	}
	b = 0;
}
