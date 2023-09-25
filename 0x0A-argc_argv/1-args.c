#include <stdio.h>
/**
 * main - entry point
 * @argc: count of command line arguments
 * @argv: array of strings containing arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
