#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memmory using malloc and free
 * @ptr: pointer to the memory previous allocated
 * @old_size: size allocated for ptr
 * @new_size: new memory block
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_2;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	min_size = (old_size < new_size) ? old_size : new_size;
	ptr_2 = malloc(new_size);

	if (ptr_2 == NULL)
	{
		return (NULL);
	}
	memcpy(ptr_2, ptr, min_size);
	free(ptr);
	return (ptr_2);
}
