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
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[len1] = s1[i];

	for (i = 0; i < len2; i++)
	{
		array[len1] = s2[i];
		len1++;
	}
	array[len1] = '\0';

	return (array);
}
