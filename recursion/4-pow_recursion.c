#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 1)
		return (x);

	x = (x * x)
	y--;
	_pow_recursion(x, y);
}
