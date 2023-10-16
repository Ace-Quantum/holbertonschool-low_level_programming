#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the sum of arguments
 */

int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d", 0);
		printf("\n");
		return (0);
	}

	for (i = 1; i <= argc - 1; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 4 || argv[i][j] > 57)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			j++;
		}
	}

	for (i = 1; i <= argc - 1; i++)
		sum = sum + atoi(argv[i]);

	printf("%d", sum);
	printf("\n");
	return (0);
}
