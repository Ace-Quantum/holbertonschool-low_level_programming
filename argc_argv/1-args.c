#include <stdio.h>

/**
 * print_arg_int - start of program
 * @argc: number of arguments
 */

void print_arg_int(int argc)
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	else
		printf("error");
}

/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	print_arg_int(argc);
	return (0);
}
