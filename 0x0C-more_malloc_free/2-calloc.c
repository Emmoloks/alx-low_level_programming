#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: no of elements
 * @size: size of the type
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t size_total;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	size_total = (size_t)nmemb * size;
	ptr = malloc(size_total);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size_total);
	return (ptr);
}
