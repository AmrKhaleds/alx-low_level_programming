#include <stdio.h>
/**
 * main - return lowercase alphabet,
 * and not return q and e
 * Return: 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (!(letter == 'e' || letter == 'q'))
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
