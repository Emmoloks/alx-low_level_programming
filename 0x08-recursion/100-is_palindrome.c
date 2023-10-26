#include "main.h"
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (find_palindrome(s, 0, recursive_length(s) - 1));
}
/**
 * recursive_length - finds the length of a string
 * @s: string to check
 * Return: string lengths
 */
int recursive_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + recursive_length(s + 1));
}
/**
 * find_palindrome - finds palindrome
 * @s: string to check
 * @start: starting point
 * @end: ending point
 * Return: 1 if palindrome else 0
 */
int find_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (find_palindrome(s, start + 1, end - 1));
}
