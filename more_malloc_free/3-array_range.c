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
	int *array, i, tmp;

	i = 0;

	if (min > max)
		return (NULL);

	if (min < 0)
	{
		tmp = min;
		min *= -1;
	}

	array = malloc(sizeof(int) * (min + max + 1));

	if (array == NULL)
		return (NULL);

	if (min >= 0)
	{
		while (min <= max)
		{
			array[i] = min;
			i++;
			min++;
		}
	}
	else
	{
		while (tmp <= max)
		{
			array[i] = tmp;
			i++;
			tmp++;
		}
	}

	return (array);
}
