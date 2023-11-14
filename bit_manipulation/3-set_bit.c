#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit- changes the bit of a value to a 1
 * @n: the number we're shifting
 * @index: the position at which we want to change things
 * Return: a 1 on success or a -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
