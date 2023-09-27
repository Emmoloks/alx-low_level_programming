#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: starting
 * @max: ending
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
