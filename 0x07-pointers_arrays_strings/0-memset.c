#include "main.h"
/**
 * _memset - function that fills s with constant bytes b
 * @s: pointer to memory to be filled
 * @b: constant byte
 * @n: number of bytes filled
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)

		s[j] = b;

	return (s);
}
