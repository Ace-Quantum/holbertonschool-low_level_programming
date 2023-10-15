#include <stdio.h>
#include "100-atoi.c"

void mult_num(int argc, char* argv[])
{
	int mult1 = _atoi(*argv[1]);
	int mult2 = _atoi(*argv[2]);

	int x = (mult1 * mult2);

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
