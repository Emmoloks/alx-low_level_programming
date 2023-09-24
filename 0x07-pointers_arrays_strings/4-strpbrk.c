#include "main.h"
/**
 *_strpbrk - search for any set of bytes
 *@s: string to search
 *@accept: set of bytes to saerch for
 *Return: a pointer to the byte s that matches to accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
