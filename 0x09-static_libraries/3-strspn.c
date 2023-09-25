#include "main.h"
/**
 * _strspn - gets the length of a prefix
 * @s: string to search in
 * @accept: containing character to match to
 * Return: number of bytes matching accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int check;
	int i;

	while (*s != '\0')
	{
		i = 0;
		check = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				check = 1;
				break;
			}
			i++;
		}
		if (check == 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
