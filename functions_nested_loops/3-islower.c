#include "main.h"

/**
 * _islower - Where the program starts
 *
 * Return: return a 0 upon letter being uppercase, 1 if lowercase
 *
 * c: character to be tested
 *
 * Description: prints out "_putchar"
 */

int _islower(int c)
{
	if (c < 97)
	{
		return('0');
	}
	else if (c > 96)
	{
		return('1');
	}
}
