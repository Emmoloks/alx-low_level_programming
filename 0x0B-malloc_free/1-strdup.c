#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: string to allocate memory for
 * Return: pointer to string in memory
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
	{
		;
	}
	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
