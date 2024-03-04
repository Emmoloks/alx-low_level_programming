#include <stdlib.h>
/**
 * create_array - creates an array and initializes char
 * @size: The size of the array
 * @c: The character to initialize the array
 *
 * Return: if success return a pointer to allocated array else returns NULL
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
