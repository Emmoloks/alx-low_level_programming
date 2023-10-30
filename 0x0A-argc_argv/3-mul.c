#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: command line argument
 * @argv: array of command line argument
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
