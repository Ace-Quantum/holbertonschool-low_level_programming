#include "main.h"

/**
 * _atoi - start of the program
 *
 * @s: string to be extracted from
 *
 * Return: return the number from the string
 */

int _atoi(char *s)
{
	int PosNegDet;
	int PosNeg;
	int Digit;
	int Result;

	PosNegDet = 0;
	Result = 0;

	while (*s < 47 || *s > 58)
	{
		if (*s == 45)
			PosNegDet = PosNegDet + 1;
		s++;
	}

	while (*s > 47 && *s < 58)
	{
		Digit = *s - '0';
		Result = Result * 10 - Digit;
		s++;
	}

	if (PosNegDet % 2 == 0)
		PosNeg = -1;
	else
		PosNeg = 1;

	return (PosNeg * Result);
}
