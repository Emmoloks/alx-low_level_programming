#include "main.h"
/**
 * _strchr - locates character in a string
 *@s: string to search in
 *@c: character to trace
 *Return: pointer to character or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (0);
}
