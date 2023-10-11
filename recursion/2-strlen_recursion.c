#include "main.h"

int _strlen_recursion(char *s)
{
	int x = 0;

	RecursiveStrLen(s);
	return(x);
}

int RecursiveStrLen(char *s)
{
	if (s[x] == '\0')
		return(x);

	x++;
	RecursiveStrLen(s);
}
