#include <stdio.h>

/**
 * main - Where the program starts
 *
 * putchar - prints out a single character
 *
 * Return: return a 0 upon proper execution
 */

int main(void)
{
	char letter = 'z';

	while (letter <= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
