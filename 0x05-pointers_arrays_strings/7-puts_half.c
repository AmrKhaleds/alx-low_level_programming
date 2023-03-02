#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: param
 *
 */

void puts_half(char *str)
{
	int i, n, j;
	int strCounter = 0;

	for (i = 0; str[i] != '\0'; i++)
		strCounter++;
	if ((strCounter % 2) == 0)
		n = strCounter / 2;
	else
		n = (strCounter - 1) / 2;

	for (j = n; j < strCounter; j++)
		_putchar(str[j]);
	_putchar('\n');
}
