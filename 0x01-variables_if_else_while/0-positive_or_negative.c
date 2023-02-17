#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - return if random number is greater than 0 => is positive
 * and if number is zero => is zero and if number is less than 0 => negative
 * Return: 0 if code successfully execute , otherwise non-zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
