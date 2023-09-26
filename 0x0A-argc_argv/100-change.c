#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of command line arguments
 * @argv: arrays of strings
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cents;
	int count;
	 int coins[5] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
