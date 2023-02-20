#include <stdio.h>
/**
 * main - return number from 0 to 9,
 *
 * Return: 0 when success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}

