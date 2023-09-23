#include "main.h"

/**
 * print_sign - Where the program starts
 *
 * Return: return a 0 upon letter being uppercase, 1 if lowercase
 *
 * @n: number to be tested
 *
 * Description: prints out "_putchar"
 */

int print_sign(int n)
{
	char a = '-';
	char b = '+';
	char c = '0'

	if (n < 0)
	{
		_putchar(a);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(b);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(c);
		return (0);
	}
}
