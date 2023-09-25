#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string to check
 * Return: the length of a string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * pal_recursive - checks if is palindrome
 * @s: string
 * @back: index of back character
 * @front: index of front character
 * Return: 1 if success else 0
 */

int pal_recursive(char *s, int back, int front)
{
	if (back >= front)
	{
		return (1);
	}
	if (s[back] != s[front])
	{
		return (0);
	}
	return (pal_recursive(s, back + 1, front - 1));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 * Return: 1 if s is palindrome else 0
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (pal_recursive(s, 0, length - 1));
}
