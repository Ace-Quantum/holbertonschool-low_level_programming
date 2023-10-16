#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int mult1;
	int mult2;

	if (argc != 3)
        {
                printf("Error");
                printf("\n");
                return (1);
        }

	mult1 = atoi(argv[1]);
        mult2 = atoi(argv[2]);

	printf("%d\n", (mult1 * mult2));
        return (0);
}
