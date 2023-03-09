#include "main.h"

/**
 *_strspng - Function that gets the length of a prefix substring
 *@s: Pointer
 *@accpet: Pointer
 *Return: Int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, pos;

	pos = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (accept[i] == s[x])
			{
				pos++;
				break;
			}
		}
	}

	return (pos);
}
