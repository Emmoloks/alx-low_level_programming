#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed into half
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;

	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
