#include "main.h"

int _strlen_recursion(char *s)
{
	int x = 0;

	RecursiveStrLen(s, x);
	return(x);
}

int RecursiveStrLen(char *s, int x)
{
	if (s[x] == '\0')
		return(x);
	else
		x++;
		RecursiveStrLen(s, x);
}
