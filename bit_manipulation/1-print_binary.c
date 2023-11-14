#include <stdio.h>
#include "main.h"

/**
 * print_binary- print the number but in binary
 * @n: the number to print the binary of
*/
void print_binary(unsigned long int n)
{
	int digit_tracker = 0;
	unsigned long int number_tracker = n;

	while (number_tracker)
	{
		number_tracker = number_tracker >> 1;
		digit_tracker++;
	}

	if (digit_tracker < 0)
		putchar('0');

	while (digit_tracker > 0)
	{
		number_tracker = n >> --digit_tracker;
		if (number_tracker & 1 > 0)
			putchar('1');
		else
			putchar('0');
	}
}
