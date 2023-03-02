#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: param
 *
 */

void print_rev(char *s)
{
	int strCounter = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		strCounter++;
	for (j = (strCounter - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
