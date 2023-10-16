#include "main.h"

/**
 * _sqrt_recursion - beginning of the set of functions
 * @n: the number of which to find the square root
 * Return: the root of the squared number
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	return (RootSquare(n, i));
}

/**
 * RootSquare - the function that does the actual work
 * @n: the number of which to find the root of
 * @i: the iterator/checker
 * Return: i, when it becomes the square root, or -1 if there is none
 */

int RootSquare(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i == n / 2)
		return (-1);

	i++;

	return (RootSquare(n, i));
}
