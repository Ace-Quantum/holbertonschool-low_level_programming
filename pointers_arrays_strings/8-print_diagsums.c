#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the start of the program to print diagonal sums
 *
 * @a: the array of integers
 * @size: the size given for the array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = 0;

	while (i <= size)
	{
		sum1 = sum1 + a[i][j];
		i++;
		j++;
	}

	i = size;
	j = 0;

	while (j <= size)
	{
		sum2 = sum2 + a[i][j];
		i--;
		j++;
	}
	printf("%d, %d", sum1, sum2);
}
