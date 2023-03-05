#include "main.h"
/**
 **leet - Function that encodes a string into 1337
 *@s: Pointer
 *Return: char
 */
char *leet(char *s)
{
	int x, i;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[x] == a[i])
			{
				s[x] = b[i];
			}
		}
	}

	return (s);
}
