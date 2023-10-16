#include "main.h"

/**
 * is_prime_number - start of the programs
 * @n: the number in question
 * Return: 0 if not prime, 1 if so
 */

int is_prime_number(int n)
{
	int i;

	if (n > 1)
		i = 2;
	else if (n < 2)
		return (0);

	return (rec_prime(n, i));
}

/**
 * rec_prime - the actual calculations
 * @n: the number in question
 * @i: the iterator
 * Return: 0 if not prime, 1 if so
 */

int rec_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i > n / 2)
		return (1);

	i++;

	return (rec_prime(n, i));
}
