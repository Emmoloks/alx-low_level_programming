#include <stdlib.h>
/**
 * create_array - creates arrays and initializes it with a specific char
 * @size: size of array to make
 * @c: character to fill
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(sizeof(char) * size);

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
