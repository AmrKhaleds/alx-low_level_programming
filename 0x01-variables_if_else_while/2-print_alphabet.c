#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * follwed by a new line
 * Return: 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
