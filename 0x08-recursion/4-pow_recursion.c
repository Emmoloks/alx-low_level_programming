#include "main.h"
/**
 * _pow_recursion - returns value of x raised to y
 * @x: value to be raised
 * @y: the exponent
 * Return: result of x raised to y or -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
