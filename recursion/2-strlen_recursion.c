#include "main.h"

int _strlen_recursion(char *s)
{
	int x = 0;

	return (RecursiveStrLen(s, x));
}

int RecursiveStrLen(char *s, int x)
{
	if (s[x] == '\0')
		return(x);

	x++;
	return (RecursiveStrLen(s, x));
}
