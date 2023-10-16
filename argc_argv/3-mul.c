#include <stdio.h>
#include <stdlib.h>

void mult_num(int argc, char* argv[])
{
	void(argc);

	int mult1 = atoi(argv[1]);
	int mult2 = atoi(argv[2]);

	int x = (mult1 * mult2);

	printf("%d", x);
}

int main(int argc, char* argv[])
{
        if (argc != 3)
        {
                printf("Error");
                printf("\n");
                return (1);
        }

        mult_num(argc, argv);
        return (0);
}
