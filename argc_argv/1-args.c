#include <stdio.h>

void print_arg_int(int argc)
{
	if (argc >=1)
		printf("%f\n", argc);
	else
		printf("error");
}

int main(int argc)
{
	print_arg_int(argc);
	return (0);
}
