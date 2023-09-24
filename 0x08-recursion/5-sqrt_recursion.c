#include "main.h"
/**
 * _sqrt_finder - finds the square root recursively
 * @n: number to find square root
 * @digit: to check square root
 * Return: the square root
 */
int _sqrt_finder(int n, int digit)
{
        if (digit * digit == n)
        {
                return (digit);
        }
        else if (digit * digit > n)
        {
                return (-1);
        }
        else
        {
                return (_sqrt_finder(n, digit + 1));
        }
}

/**
 * _sqrt_recursion - finds square root of a number
 * @n: number to find square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1 && n >= 0)
	{
		return (n);
	}
	else
	{
		return (_sqrt_finder(n, 1));
	}
}
