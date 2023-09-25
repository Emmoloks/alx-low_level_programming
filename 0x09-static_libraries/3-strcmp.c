#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: a value 0 if same 1 if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
