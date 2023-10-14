#include <stdio.h>

void print_arg_int(int argc)
{
	if (argc >=1)
		printf("%d\n", argc - 1);
	else
		printf("error");
}

int main(int argc, char *argv[])
{
	(void)argv;

	print_arg_int(argc);
	return (0);
}
