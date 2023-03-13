#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - Function that returns a pointer to a newly
 *allocated space in memory
 *@str: Pointer
 *
 *Return: Char
 */

char *_strdup(char *str)
{
	char *array;
	int len, i;

	len = 0;
	i = 0;

	while (str[len] != '\0')
		len++;

	array = malloc(sizeof(*array) * (len + 1));

	if (str == NULL || i > len)
		return (NULL);

	else
	{
		while (str[i] != '\0')
		{
			array[i] = str[i];
			i++;
		}
		array[i] = '\0';
	}
	return (array);
}
