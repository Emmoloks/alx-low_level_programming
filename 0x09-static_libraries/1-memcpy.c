#include "main.h"
/**
 * _memcpy - function copies bytes from src to dest
 *@src: source of bytes to copy
 *@dest: where to be copied
 *@n: number of bytes to copy
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}
	return (dest);
}
