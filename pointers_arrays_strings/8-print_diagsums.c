#include <stdio.h>

/**
 *print_diagsums - Function that prints the sum of the two diagonals
 *@a: Pointer
 *@size: Len
 *Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, sx, sy;

	sx = 0;
	sy = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sx += a[i];

	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sy += a[i];

	printf("%d, %d\n", sx, sy);
}
