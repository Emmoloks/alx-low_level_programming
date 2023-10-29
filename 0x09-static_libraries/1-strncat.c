#include "main.h"
/**
 * _strncat - combines dest with n characters from src
 *@dest: str to  append to
 *@src: str to be appended
 *@n: number of characters to append
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
