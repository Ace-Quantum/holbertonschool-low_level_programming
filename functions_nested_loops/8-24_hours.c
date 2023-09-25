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
	int h = 0;
	int m = 0;

	while (m < 1441)
	{
		while (a < 3)
		{
			while (b < 10)
			{
				while (c < 6)
				{
					while (d < 10)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
						m = (m + 1);
						d = (d + 1);
					}
					d = 0;
					c = (c + 1);
				}
				c = 0;
				b = (b + 1);
			}
			b = 0;
			a = (a + 1);
		}
	}
}

