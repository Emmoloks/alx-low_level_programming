#include "main.h"
/**
 * rev_string - functions that prints string in reverse
 * @s: string to be printed in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
