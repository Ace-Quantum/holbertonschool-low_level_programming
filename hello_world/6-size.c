#include <stdio.h>

/**
 * main - works as the entry point of the program
 *
 * %zu works to denote where the referred to items will go
 *
 * sizeof - defines the size of something
 *
 * Return: return a 0 upon 0 fails
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	printf("Size of long double: %zu byte(s)\n", sizeof(long double));

	return (0);
}
