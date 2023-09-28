#include <stdio.h>

/**
 * FizzBuzz - FIZZBUZZFIZZBUZZFIZZBUZZ
 */

void FizzBuzz(void)
{
	int i = 0;

	while (i < 101)
	{
		if (i % 15)
			printf("FizzBuzz");
		else if (i % 3)
			printf("Fizz");
		else if (i % 5)
			printf("Buzz");
		else
			printf("%d", i);
		putchar(' ');
		i++;
	}
}
