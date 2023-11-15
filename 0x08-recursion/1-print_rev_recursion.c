#include "main.h"

/**
 * _puts_rev_recursion - function that prints a string in reverse.
 * @s: That Charcter to print
 *
 * Return: On success 1.
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);

	}
}
