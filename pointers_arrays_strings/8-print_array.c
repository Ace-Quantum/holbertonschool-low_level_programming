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
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a[n + 1] != 0)
			printf(", ");
	}
	printf("\n");
}
