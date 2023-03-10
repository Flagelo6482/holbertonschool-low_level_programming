#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - Function hat searches a string for any of a set of bytes
 *@s: Pointer
 *@accept: Pointer
 *Return: Char
 */

char *_strpbrk(char *s, char *accept)
{
	int x, q;

	for (x = 0; *s != '\0'; x++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (*s == accept[q])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
