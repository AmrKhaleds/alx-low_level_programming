#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: params
 */

void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size - row; col > 0; col--)
				_putchar(' ');

			for (col = 0; col < row; col++)
				_putchar('#');

			if (row == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
