#include <stdio.h>

/**
 * main - FizzBuzz test
 *
 * Return: 0 when success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("%s ", "Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("%s ", "Buzz");
			}
			else
			{
				printf("%i ", i);
			}

		}
	}
	printf("\n");
	return (0);
}
