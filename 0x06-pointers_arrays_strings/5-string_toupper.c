#include "main.h"
/**
 * string_toupper - changes lowercase to upper in a string
 * @s: string to be converted
 *Return:converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -  'a' + 'A';
		}
		i++;
	}
	return (s);
}
