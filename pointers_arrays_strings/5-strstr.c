#include "main.h"
#include <stdio.h>

/**
 *_strstr - Function that locates a substring
 *@haystack: Pointer
 *@needle: Pointer
 *Return: Char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}

	return NULL;
}
