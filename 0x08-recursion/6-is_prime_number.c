#include "main.h"
/**
 * is_recursive - checks if input is a prime no
 * @n: number to be checked
 * @divisor: divisor to check
 * Return: 1 if prime number found
 */
int is_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_recursive(n, divisor - 1));
}
/**
 *is_prime_number - checks if number is prime
 *@n: number to check
 *Return: 1 if prime number
 */
int is_prime_number(int n)
{
	return (is_recursive(n, n / 2));
}
