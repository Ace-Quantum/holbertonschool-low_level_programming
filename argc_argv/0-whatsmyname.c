#include <stdio.h>

/**
 * print_own_name - start of the program
 * @argc: the number of arguments passed in
 * @argv: an array of strings representing the arguments that were passed in
 */

void print_own_name(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	else
		printf("error");
}

/**
 * main - the start
 * @argc: the number of arguments passed in
 * @argv: array of arguments passed in
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	print_own_name(argc, argv);
	return (0);
}
