#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: param
 * @b: param
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
