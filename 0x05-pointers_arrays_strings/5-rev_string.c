#include "main.h"
/**
 * rev_string - convert string to reverse
 * @s: param
 *
 */

void rev_string(char *s)
{
	int strCounter = 0;
	int i;
	int rev = s[0];

	while (s[strCounter] != '\0')
		strCounter++;
	for (i = 0; i < strCounter; i++)
	{
		strCounter--;
		rev = s[i];
		s[i] = s[strCounter];
		s[strCounter] = rev;
	}
}
