#include "main.h"
/**
 * swap_int - functions that swaps values of two int
 * @a: value of integer one
 * @b: value of integer two
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
