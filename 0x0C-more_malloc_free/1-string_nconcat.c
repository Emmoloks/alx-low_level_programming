#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with a limit
 * @s1: base string to concatenate to
 * @s2: string to copy from
 * @n: maximum number of char to concatenate
 * Return: pointer to the memory containing the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	char *string, *r;

	if (s1 != NULL)
	{
		while (s1[len_1])
			len_1++;
	}
	if (s2 != NULL)
	{
		while (s2[len_2])
			len_2++;
	}
	if (n >= len_2)
		n = len_2;
	string = malloc(sizeof(char) * (len_1 + n + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	r = string;

	while (s1 && *s1)
	{
		*r = *s1;
		r++;
		s1++;
	}
	while (n > 0)
	{
		*r = *s2;
		r++;
		s2++;
		n--;
	}
	*r = '\0';
	return (string);
}
