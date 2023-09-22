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
	char letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
