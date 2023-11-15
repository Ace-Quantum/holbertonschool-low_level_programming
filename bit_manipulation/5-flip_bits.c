#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits- returns how many bits are different than each other
 * @n: comp num 1
 * @m: comp num 2
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip_counter = 0;

	while (n > 0)
	{
		if ((n & 1) != (m & 1))
			flip_counter++;

		n = n >> 1;
		m = m >> 1;
	}

	return (flip_counter);
}
