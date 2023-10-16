#include "main.h"

/**
 * factorial - start of the program
 * @n: the number to factorialize
 * Return: the number but factorialized
 */

int factorial(int n)
{
	int x = 1;

	if (n < 0)
		return (-1);

	return (factorio(n, x));
}

/**
 * factorio - does the factorializing
 * @n: the number to factorialize
 * @x: the counter for how many times you've factorialized
 * Return: the factorialized number
 */

int factorio(int n, int x)
{
	if (n == 0)
		return (x);

	x = (x * n);
	n--;
	return (factorio(n, x));
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

