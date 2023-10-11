#include <stdio.h>

void main(void)
{
	int x = 5;
	test(x);
}


void test(int x)
{
	int j = 2;

	if (j < 1)
	{
		j--
		printf("%d", x);
		test(x - 1)
	}
}
