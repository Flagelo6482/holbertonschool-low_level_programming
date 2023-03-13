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

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	array = malloc(sizeof(*array) * (len + 1));

	if (array == NULL || len < i)
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
