#include "main.h"
#include "_strlen.c"

/**
 * _print_rev_recursion - calls function to print characters in reverse
 * @s: the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	int x = _strlen(s);

	PrintInReverse(s, x - 1);
}

/**
 * PrintInReverse - prints the characters in reverse
 * @s: the string to be printed in reverse
 * @x: the integer to represent the end of the string
 */

void PrintInReverse(char *s, int x)
{
	if (x < 0)
		return;

	_putchar(s[x]);
	PrintInReverse(s, x - 1);
}
