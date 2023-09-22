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
	int number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
