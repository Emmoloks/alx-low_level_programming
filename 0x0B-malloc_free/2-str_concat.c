#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to a newly allocated string which is concat
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0;

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
	concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concatenated == 0)
	{
		return (0);
	}
	for (i = 0; i < len_s1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		concatenated[len_s1 + i] = s2[i];
	}
	concatenated[len_s1 + len_s2] = '\0';

	return (concatenated);
}

