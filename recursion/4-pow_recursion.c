#include "main.h"

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 1)
		return (x);

	return (_rec_pow(x, y, i));
}

int _rec_pow(int x, int y, int i)
{
	if (y < 1)
		return (x);

	x = (x * i);
	y--;
	return(_rec_pow(x, y, i));
}
