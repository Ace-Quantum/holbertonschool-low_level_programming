#include "main.h"

/**
 * times_table - Program start
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			_putchar(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
