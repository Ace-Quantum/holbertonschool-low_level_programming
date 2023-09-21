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
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
