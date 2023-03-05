#include "main.h"
/**
 *_strcmp - Function that compares two strings
 *@s1: Pointer
 *@s2: Pointer
 *Return: Int
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = 0;

	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len1 == len2)
		return (0);

	else if (len1 < len2)
		return (-15);

	else
		return (15);
}
