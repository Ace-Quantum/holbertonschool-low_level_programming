#include "main.h"

int is_prime_number(int n)
{
	int i = 1;

	return (rec_prime(n, i));
}

int rec_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i > n / 2)
		return (1);

	return (rec_prime(n, i + 1));
}
