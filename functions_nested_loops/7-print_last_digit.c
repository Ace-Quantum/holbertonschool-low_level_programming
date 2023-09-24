#include "main.h"

/**
 * print_last_digit - Where the program starts
 *
 * Return: return a upon proper execution
 *
 * @n: a number
 *
 * Description: prints out "_putchar"
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0);
	{
		n = -n
	}

	a = n % 10;

	_putchar(a + '0');
	return (a);
}
