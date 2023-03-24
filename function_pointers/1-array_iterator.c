#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - Function that executes a function given as a parameter on
 *                 each element of an array
 *
 *@array: Pointer to an array
 *@size: Array size
 *@action: Pointer to function
 *
 *Return: Void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
