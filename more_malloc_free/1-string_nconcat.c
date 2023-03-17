#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - Function that concatenates two strings
 *@s1: Pointer
 *@s2: Pointer
 *@n: Variable
 *
 *Return: Pointer char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len1, len2, concat, i;

	len1 = 0;
	len2 = 0;
	concat = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		array = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		array = malloc(sizeof(char) * (len1 + n + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[concat] = s1[i];
		concat++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		array[concat] = s2[i];
		concat++;
	}
	array[concat] = '\0';

	return (array);
}
