#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
