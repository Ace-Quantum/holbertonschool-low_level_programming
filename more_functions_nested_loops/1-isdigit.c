#include "main.h"

/**
 * _isdigit - starting point, determines if digit
 *
 * Return: 1 if digit
 *
 * @c: character to be tested
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
