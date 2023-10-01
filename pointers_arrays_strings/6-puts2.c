#include "main.h"

/**
 * puts2 - starting point of the file
 *
 * @str: the str to be skipped through
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
