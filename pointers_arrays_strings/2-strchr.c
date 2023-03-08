#include <stdlib.h>
#include "main.h"

/**
 *_strchr - Function that locates a character in a string
 *@s: Pointer
 *@c: Variable
 *Return: Char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
