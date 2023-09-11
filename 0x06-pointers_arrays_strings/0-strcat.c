#include "main.h"
/**
 * _strcat - function that combines two strings
 * @src: first string
 * @dest: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
