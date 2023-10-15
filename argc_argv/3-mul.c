#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	mult_num(argc, argv);
	return (0);
}

void mult_num(int i, char* c)
{
	int x = (c[1] * c[2]);

	printf("%d", x);
}
