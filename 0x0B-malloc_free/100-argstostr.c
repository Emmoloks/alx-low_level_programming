#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: number of arguments
 * @av: arguments strings
 * Return:  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i, j;
	char *string;
	int index;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	string = (char *)malloc((len + 1) * sizeof(char));
	if (string == 0)
	{
		return (0);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[index++] = av[i][j];
		}
		string[index++] = '\n';
	}
	string[index] = '\0';
	return (string);
}
