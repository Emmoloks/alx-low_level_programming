#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *@i: number to take the last digit from
 *Return: the last digit of the number
 */
int print_last_digit(int i)
{
	i %= 10;

	if (i < 0)
	{
		i *= -1;
	}
		_putchar('0' + i);
		return (i);
}
