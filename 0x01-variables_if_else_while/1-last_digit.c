#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - return if last digit in random number is greater than 5
 * or equal 0 or less than 6
 * Return: 0 if code is successfully executed, otherwise non-zero
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}
