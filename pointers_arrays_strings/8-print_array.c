#include "main.h"
#include <stdio.h>
/**
 *print_array - That prints n elements of an array of integers
 *@a: Pointer
 *@n: Variable
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		if (q == 0)
		{
			printf("%d", a[q]);
		}

		else
		{
			printf(", %d", a[q]);
		}
	}
	printf("\n");
}
