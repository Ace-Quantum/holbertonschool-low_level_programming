#include <stdio.h>

void print_arg_int(int argc)
{
	if (argc >=1)
		printf("%d\n", argc);
	else
		printf("error");
}

void main(int argc)
{
	print_arg_int(argc);
	return (0);
}
