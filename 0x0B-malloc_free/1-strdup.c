#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 * Return: If success return a pointer to a string else NULL
 */
char *_strdup(char *str)
{
	char *string;

	if (str == 0)
	{
		return (0);
	}

	string = malloc(strlen(str) + 1);

	if (string == 0)
	{
		return (0);
	}
	strcpy(string, str);

	return (string);
}
