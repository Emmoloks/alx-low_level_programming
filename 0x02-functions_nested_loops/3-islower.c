#include "main.h"
/**
 *_islower - checks if character is in lower case
 * @c: character to be checked
 * Return: 1 (True) else 0 (false)
 */
int _islower(int c)
{
	if ('a' <= c && 'z' <= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
