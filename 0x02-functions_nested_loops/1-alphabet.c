#include "main.h"
/**
 * main - return lowercase alphabet
 *
 * Return: 0 when success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
