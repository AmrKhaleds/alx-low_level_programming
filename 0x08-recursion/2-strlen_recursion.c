#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char
 *
 * Return: On Success 1.
 */

int counter = 0;

int _strlen_recursion(char *s)
{
	if(*s)
	{
		counter++;
		_strlen_recursion(s + 1);
	}
	return counter;
}
