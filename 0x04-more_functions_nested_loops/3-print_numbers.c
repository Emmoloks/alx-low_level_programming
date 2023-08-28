#include "main.h"
/**
 * print_numbers - function that prints 0-9
 * Returns: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10 )
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
