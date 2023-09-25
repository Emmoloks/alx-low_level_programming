#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in
 * @needle: string to look for
 * Return: a pointer else nul
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (0);
}
