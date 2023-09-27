#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments
 * @....: list of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
