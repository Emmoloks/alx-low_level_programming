#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocs memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
