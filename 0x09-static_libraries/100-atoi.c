#include "main.h"
/**
 * _atoi - converts string into an int
 * @s: string to be converted
 * Return: int value of the string
 */
int _atoi(char *s)
{
	int symbol = 1;
	int result = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			symbol = -symbol;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}
	return (result * symbol);
}
