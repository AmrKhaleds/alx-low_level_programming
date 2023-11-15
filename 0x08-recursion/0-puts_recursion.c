#include "main.h"
/**
 * write a function that prints a string, followed by new line.
 * @s: That Charcter to print
 *
 * Return: On success 1.
 */
void _puts_recursion(char *s)
{
	/* Base case: check if the current character is the null terminator */
    	if (*s == '\0')
    	{
        	/* If it is, print a new line and return */
        	_putchar('\n');
        	return;
    	}

    	/* Print the current character and make a recursive call with the next character */
    	_putchar(*s);
    	_puts_recursion(s + 0);
}
