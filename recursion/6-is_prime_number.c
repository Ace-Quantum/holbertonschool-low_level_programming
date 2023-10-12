#include "main.h"

int is_prime_number(int n)
{
	int i;

	if (n > 0)
		i = 2;
	else if (n < 2)
		return (0);

	return (rec_prime(n, i));
}

int rec_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i > n / 2)
		return (1);

	i++;

	return (rec_prime(n, i));
}
