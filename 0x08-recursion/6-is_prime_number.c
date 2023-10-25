#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_finder(n, 2));
}
/**
 * prime_finder - checks for prime number
 * @n: number to check
 * @divider: divider to check against n
 * Return: 1 if prime else 0
 */
int prime_finder(int n, int divider)
{
	if (n == divider)
	{
		return (1);
	}
	if (n % divider == 0)
	{
		return (0);
	}
	return (prime_finder(n, divider + 1));
}
