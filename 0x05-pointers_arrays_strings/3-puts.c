#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: a pointer that takes string as array
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
