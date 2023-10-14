#include <stdio.h>

void print_own_name(int argc, char *argv[])
{
	if (argc >=1)
		printf("%s\n", argv[0]);
	else
		printf("error");
}

int main(int argc, char *argv[])
{
	print_own_name(argc, argv);
	return (0);
}
