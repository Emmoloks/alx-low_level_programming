#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print alll that match with format
 * @format: type to print out
 * @...: arguments to print
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *separator = "";
	unsigned int i = 0;
	char current_format;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];
		if (current_format == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (current_format == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (current_format == 'f')
			printf("%s%f", separator, (float)va_arg(args, double));
		else if (current_format == 's')
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}
	}
	separator = ", ";
	i++;
	printf("\n");

	va_end(args);
}
