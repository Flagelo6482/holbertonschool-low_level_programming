#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Function that creates an array of chars and initializes
 *@size: Parameter
 *@c: Parameter
 *
 *Return: Int or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
