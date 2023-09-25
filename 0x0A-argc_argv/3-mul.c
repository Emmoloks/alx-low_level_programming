#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: count of command line arguments
 *@argv: array of strings
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;

	printf("%d\n", product);
	return (0);
}
