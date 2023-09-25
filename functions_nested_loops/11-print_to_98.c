#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Where the program starts
 *
 * @n: ascii variable to check
 *
 * Return: return a 0 upon proper execution
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf (n + '0');
			printf (", ");
			n == (n + 1);
		}
		printf (98 + '0');
	}
	else
	{
		while (n != 98)
		{
			printf (n + '0');
			printf (", ");
			n == (n - 1);
		}
		printf (98 + '0');
	}
}

