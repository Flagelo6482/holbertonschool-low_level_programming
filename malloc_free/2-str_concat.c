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
	int i, concat, len;

	concat = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	array = malloc(sizeof(char) * len);

	if (array ==  NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[concat] = s1[i];
		concat++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		array[concat] = s2[i];
		concat++;
	}
	array[concat] = '\0';

	return (array);
}
