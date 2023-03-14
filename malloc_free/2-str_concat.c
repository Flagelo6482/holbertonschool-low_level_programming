#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - Function that concatenates two strings
 *@s1: Pointer
 *@s2: Pointer
 *
 *Return: Char
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int len1, len2, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	array = malloc(sizeof(*array) * (len1 + len2 + 1));

	if (s1 == NULL)
		return (*s2);

	else if (s2 == NULL)
		return (*s1);

	else if (s1 == NULL && s2 == NULL)
		return (NULL);

	else
	{
		while (s1[i] != '\0')
		{
			array[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			array[len1] = s2[i];
			len1++;
			i++;
		}

		array[len1] = '\0';
	}
	return (array);
}
