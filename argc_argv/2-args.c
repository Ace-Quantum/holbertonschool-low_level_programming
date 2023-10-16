#include <stdio.h>

/**
 * loop_args - start of the program
 * @argc: number of arguments
 * @argv: array of arguments
 */

void loop_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}

/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	loop_args(argc, argv);
	return (0);
}
