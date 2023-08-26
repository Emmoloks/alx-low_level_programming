#include "main.h"
/**
 * times_table - prints out ni times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			int result = i * j;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
			}
			else if (result < 100)
			{
				_putchar('0' + (result / 10));
			}
			else
			{
				_putchar('0' + (result / 10));
			}

			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}
