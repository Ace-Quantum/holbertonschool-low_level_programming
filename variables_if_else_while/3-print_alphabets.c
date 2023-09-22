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
	char letter = 'a';
	char better = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (better <= 'Z')
	{
		putchar(better);
		better++;
	}

	putchar('\n');

	return (0);
}
