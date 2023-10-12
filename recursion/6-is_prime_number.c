#include "main.h"

int is_prime_number(int n)
{
	int i;

	if (n > 0)
		i = 2;
	else if (n < 0)
		i = -2;

	return (rec_prime(n, i));
}

int rec_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (((i > n / 2) && (n > 0)) || ((i < n / 2) && (n < 0)))
		return (1);

	if (n > 0)
		i++;
	else if (n < 0)
		i--;

	return (rec_prime(n, i));
}
