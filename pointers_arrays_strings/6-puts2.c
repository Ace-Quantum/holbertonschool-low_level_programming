#include "main.h"

/**
 * puts2 - start of the file, prints every other character
 *
 * @str: the str to be skipped through
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\' && str[i + 1] != '0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
