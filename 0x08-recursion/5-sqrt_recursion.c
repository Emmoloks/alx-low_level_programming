#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to get the squaref root
 * Return: natural square root of a number else -1 if not
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}
/**
 * get_sqrt - helper function to find square root
 * @n: number to get square root
 * @guess: current guess for the square root
 * Return: natural square root of a number else -1
 */
int get_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (get_sqrt(n, guess + 1));
}
