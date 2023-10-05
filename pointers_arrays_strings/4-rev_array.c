#include "main.h"

/**
 * reverse_array - starting point of the program, reverses an array of integers
 *
 * @a: array to be reversed
 * @n: how large the array is
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while(i < n - 1)
	{
		temp = a[(i)];
		a[i] = a[(n - 1)];
		a[(n - 1)] = temp;
		i++;
		n--;
	}
}
