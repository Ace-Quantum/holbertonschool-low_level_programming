#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d", 0);
		return (0);
	}

	for (i = 1; i <= argc - 1; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (*argv[i] < 4 || *argv[i] > 57)
			{
				printf("Error");
				return (1);
			}
			j++;
		}
	}

	for (i = 1; i <= argc - 1; i++)
	{
		sum = sum + atoi(argv[i]);
		printf("%d", sum);
	}

	return (0);
}
