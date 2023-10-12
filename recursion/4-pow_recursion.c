#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 1)
		return (x);

	y--;
	x = (x * (_pow_recursion(x, y)));
}
