#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: param that return letter
 * Return: 1 if c is lowercase, otherwise if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
