#include <stdio.h>

void loop_args(int argc, char *argv[])
{
	int i;

	for(i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
}

int main(int argc, char *argv[])
{
	loop_args(argc, argv);
	return (0);
}
