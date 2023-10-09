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
	int c;
	int r = 0;
	int i = 0;
	int j = 0;
	int arr[10][10];
	int total = (size * size);

	while (i <= total)
	{
		for (c = 0; c < size; c++)
		{
			arr[r][c] = a[i];
			i++;
		}
		r++;
	}

	i = 0;

	while (i <= size)
	{
		sum1 = sum1 + arr[i][j];
		i++;
		j++;
	}

	i = size;
	j = 0;

	while (j <= size)
	{
		sum2 = sum2 + arr[i][j];
		i--;
		j++;
	}
	printf("%d, %d", sum1, sum2);
}
