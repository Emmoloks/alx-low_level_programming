#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: a pointer to a space if successful else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int len_s1 = 0, len_s2 = 0;
	unsigned int i, j;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	string = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (string == 0)
	{
		return (0);
	}

	for (i = 0; i < len_s1; i++)
	{
		string[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		string[i + j] = s2[j];
	}

	string[i + j] = '\0';

	return (string);
}
