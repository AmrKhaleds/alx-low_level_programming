#include <stdio.h>

/**
 * main - return alpgabet in lowercase,
 * then in uppercase, followed by a new line.
 * Return: 0 when success.
 */

int main(void)
{
	char letter;

	for (letter = 'a; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
