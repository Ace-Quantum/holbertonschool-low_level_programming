#include <stdio.h>

int MultNum(int a, int b)
{
	if (a != '\0' && b != '\0')
		return (a * b);
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
}

int main(int a, int b)
{
	return MultNum(a, b);
}
