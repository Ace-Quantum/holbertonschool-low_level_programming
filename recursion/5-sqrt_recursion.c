#include "main.h"

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	return (RootSquare(n, i));
}

int RootSquare(int n, int i)
{
	if (i * i == n)
		return(i);

	if (i == n / 2)
		return(-1);

	i++;

	return(RootSquare(n, i));
}
