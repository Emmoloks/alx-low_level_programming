#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{

	char l;

	for (l = 'a' ; l <= 'z' ; l++)
{
	putchar(l);
}

	for (l = 'A' ; l <= 'Z' ; l++)

{
	putchar(l);
}
	putchar('\n');
	return (0);
}
