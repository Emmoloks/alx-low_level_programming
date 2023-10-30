#include <stdio.h>
/**
 * main - entry point
 * @argc: command line argument
 * @argv: array of command line argument
 * Return: 0 when successful
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
