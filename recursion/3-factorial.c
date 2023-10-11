#include "main.h"

int factorial(int n)
{
	int x = 1;

	return (factorio(n, x));
}

int factorio(int n, int x)
{
	if (n < 1)
		return (x);

	x = (n * (n - 1));
	n--;
	return (factorio(n, x))
}
/**
 * Ignore all this
int factorial(int n)
{
	if (n < 1)
		return (n);

	n = (n * n-1)
	return(factorial(n));
	*/

