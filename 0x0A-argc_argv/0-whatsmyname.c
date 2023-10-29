#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: an array of command line argument strings
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
