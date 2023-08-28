#include "main.h"
/**
 * _isdigit - this checks for a digit
 * @c: the digit to be checked
 * Return: 1 if success else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
