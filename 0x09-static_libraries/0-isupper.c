#include "main.h"
/**
 * _isupper - checks if given character is uppercase
 * @c: parameter to be checked
 *
 *Return: 1 if successful elsse 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
