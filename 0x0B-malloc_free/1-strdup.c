#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated memory
 * @str: string to allocate memory for
 * Return: a pointer to a string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	s = malloc(sizeof(char) * (i + 1));
	if (s == 0)
	{
		return (0);
	}
	s[i] = '\0';
	while (i--)
	{
		s[i] = str[i];
	}
	return (s);
}

