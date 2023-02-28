#include "main.h"

/**
 * _strlen - the length of string
 *
 * @s: is a pointer
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, length = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		length++;
		pl = s[i++];
	}
	return (length);
}
