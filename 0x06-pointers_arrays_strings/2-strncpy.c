#include "main.h"
/**
 * _strncpy - function copy n characters from src to dest
 * @dest: copied to
 * @src: copied from
 * Return: dest
 * @n: number of characters to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
