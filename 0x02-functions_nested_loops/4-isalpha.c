#include "main.h"
/**
 * _isalpha - return 1 ifc is aletter, lowercase or uppercase
 * @c: param that pass letter
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
