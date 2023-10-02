#include "main.h"

/**
 * 
 */

int _atoi(char *s)
{
	int GenMachine;
	int Gen;
	int Digit;
	int Result;

	GenMachine = 0;

	while (*s != '\0')
	{
		if (*s == 43)
			GenMachine = GenMachine + 1;
		else if (*s == 45)
			GenMachine = GenMachine - 1;
		else if (*s > 47 && *s < 58)
		{
			Digit = s + '0';
			Result = Result * 10 + Digit;
		}
		s++;
	}

	if (GenMachine >= 0)
		Gen = 1;
	else
		Gen = -1;

	return Gen * Result;
}
