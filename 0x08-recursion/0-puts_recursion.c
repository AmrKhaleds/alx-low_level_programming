#include "main.h"

/**
 * write a function that prints a string, followed by new line.
 * @s: That Charcter to print
 *
 * Return: On success 1.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
