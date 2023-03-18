#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - Function that creates an array of integers
 *@min: Variable
 *@max: Variable
 *
 *Return: Return pointer to thw newly created array
 */

int *array_range(int min, int max)
{
	int *array, i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
