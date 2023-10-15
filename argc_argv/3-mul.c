#include <stdio.h>

void mult_num(int argc, char* argv[])
{
	int x = (c[1] * c[2]);

	printf("%d", x);
}

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
