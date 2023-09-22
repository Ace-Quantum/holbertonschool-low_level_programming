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
	int letter = '0';
	char comma = ',';
	char space = ' ';


	while (letter <= '9')
	{
		putchar(letter);
		putchar(comma);
		putchar(space);
		letter++;
	}

	putchar('\n');

	return (0);
}
