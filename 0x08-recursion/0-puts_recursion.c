#include "main.h"
/**
 * _puts_recursion : function that prints a string using recursion
 * @s
 *
 * Return: void function that not return anything
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	} else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
