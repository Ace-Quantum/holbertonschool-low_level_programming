#include "main.h"

/**
 * 
 */

int _atoi(char *s)
{
	int PosNegDet;
	int PosNeg;
	int Digit;
	int Result;

	PosNegDet = 0;
	Result = 0;

	while (*s != '\0')
	{
		if (*s == 43)
			PosNegDet = PosNegDet + 1;
		else if (*s == 45)
			PosNegDet = PosNegDet - 1;
		else if (*s > 47 && *s < 58)
		{
			Digit = *s - '0';
			Result = Result * 10 + Digit;
		}
		s++;
	}

	if (PosNegDet >= 0)
		PosNeg = 1;
	else
		PosNeg = -1;

	return PosNeg * Result;
}
