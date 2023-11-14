#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit- makes the value at a given point a 0
 * @n: the number to shift
 * @index: where to shift it
 * Return: 1 on success, 0 on a fail.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (0 << index);

	return (1);
}