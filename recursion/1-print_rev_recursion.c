#include "main.h"
#include "_strlen.c"

void _print_rev_recursion(char *s)
{
	int x = _strlen(s);

	PrintInReverse(s, x);
}

void PrintInReverse(int *s, int x)
{
	if (x < 0)
		return;

	_putchar(s[x]);
	x--;
}

