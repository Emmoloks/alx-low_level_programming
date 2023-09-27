#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - concatenates my arguments
 * @ac: arguments count
 * @av: arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;

	char *string, *temp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (j = 0; temp[j]; j++)
		{
			len++;
		}
		len += 1;
	}
	string = malloc(sizeof(char) * len + 1);
	len = 0;

	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (j = 0; temp[j]; j++)
		{
			string[len] = temp[j];
			len++;
		}

		string[len] = '\n';
		len++;
	}
	string[len] = '\0';
	return (string);
}
