#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Program start
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}

void main(void)
{
	print_alphabet;
}
