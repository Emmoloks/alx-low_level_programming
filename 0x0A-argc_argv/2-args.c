#include <stdio.h>
/**
 * main - entry point
 * @argc: count of cmd line arguments
 * @argv: array of string argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
