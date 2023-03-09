#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring
 *@s: Pointer
 *@accept: Pointer
 *Return: Int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, pos, f;

	pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;

		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				pos++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (pos);
		}
	}

	return (0);
}
