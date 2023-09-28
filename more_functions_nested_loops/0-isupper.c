#include "main.h"

/**
 * _isupper - program start
 *
 * Return: return a 1 if uppercase, else a 0
 *
 * @c: the number representing the character to be tested
 *
 * Description: returns numbers
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
