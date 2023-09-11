#include "main.h"
/**
 * reverse_array - reverses contents of an array
 * @a:array of intergers
 * @n:number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;

	for (i = 0; i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		n--;
	}
}
