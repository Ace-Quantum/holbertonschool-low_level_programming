#include "main.h"

/**
 * _pow_recursion - beginning of a recursive function
 * @x: the base number
 * @y: the higher number
 * Return: the math
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1)

	return (_rec_pow(x, y - 1, i));
}

/**
 * _rec_pow - the function that actually does the work
 * @x: the math'd number
 * @y: the number to raise
 * @i: the same as x (but constant)
 * Return: math
 */

int _rec_pow(int x, int y, int i)
{
	if (y < 1)
		return (x);

	x = (x * i);
	y--;
	return (_rec_pow(x, y, i));
}
