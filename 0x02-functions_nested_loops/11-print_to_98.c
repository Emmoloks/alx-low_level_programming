#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - this functions prints values upto 98
 *
 *@n: first to count from
 *Return:null
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(" ");
			}
		}
	}else
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d", i);
				if (i > 98)
				{
					printf(" ");
				}
			}
		}
		printf("\n");
}
