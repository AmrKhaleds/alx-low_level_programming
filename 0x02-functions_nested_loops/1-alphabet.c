#include "main.h"
/**
 * print_alphabet - return lowercase alphabet
 *
 * Return: 0 when success
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
