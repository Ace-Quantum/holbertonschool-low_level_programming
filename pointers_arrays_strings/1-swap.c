#include "main.h"

/**
 * swap_int - starting point of the script to swap values of pointers
 *
 * @a: a value to be swapped
 *
 * @b: a value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
