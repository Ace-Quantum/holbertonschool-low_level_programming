#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - calls a function to print a name
*
* @name: the name to print
* @f: the function that prints
*/

void print_name(char *name, void (*f)(char *))
{
	if (*f)
		(*f)(name);
}
