#include "main.h"
/**
 *rev_string - Function that reverses a string
 *@s: Pointer
 */
void rev_string(char *s)
{
	int len, i;

	char tmp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
	{
		len++;
		i++;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
