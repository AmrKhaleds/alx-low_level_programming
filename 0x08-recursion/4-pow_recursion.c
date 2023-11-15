#include "main.h"

/**
 * _pow_recursion - function that return pow of x
 * @x: X variable that hold integer
 * @y: Y variable that hold pow
 *
 * Return: on Success.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
