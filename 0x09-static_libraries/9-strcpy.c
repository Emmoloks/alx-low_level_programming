#include "main.h"
/**
 * _strcpy - functions copying src to dest
 * @dest: destination of copied str
 * @src: source of the str
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest1 = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest1);
}
