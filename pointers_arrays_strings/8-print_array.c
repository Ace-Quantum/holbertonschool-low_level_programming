#include "main.h"
#include <stdio.h>

/**
 * print_array - starting point of printing a certain number of values
 *
 * @a: array to be printed
 *
 * @n: amount of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
