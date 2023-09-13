#include "main.h"
/**
 * is_separator - checks for a separator
 *@c: string of chracters to be checked
 *Return: i if true else 0
 */
int is_separator(char c)
{
	char separator[] = {'\t', '\n', ' ', ',', ';', '.',
	'!', '?', '\"', '(', ')', '{', '}'};

	int i = 0;

	while (separator[i] != '\0')
	{
		if (c == separator[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * cap_string - capitalizes words of a string
 * @s: string to be capitalized
 * Return: string
 */
char *cap_string(char *s)
{
	int cap = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
		{
			cap = 1;
		}
		else if (cap)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 'a' - 'A';
			}
			cap = 0;
		}
		i++;
	}
	return (s);
}
