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
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (min + max + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (min + max); i++)
		array[i] = i;

	return (array);
}
