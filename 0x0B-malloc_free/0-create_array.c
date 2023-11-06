#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of char and initialise with a char
 * @size: size of array created
 * @c: character to initialize array with
 * Return: a pointer when successfull else null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(size);
	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
