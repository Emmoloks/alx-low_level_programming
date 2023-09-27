#include <stdio.h>

/**
 * print_name - Prints a name using a provided function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
