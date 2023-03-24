#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - Function that searches for an integer
 *@array: Pointer
 *@size: Size array
 *@cmp: Pointer to function
 *
 *Return: Int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
