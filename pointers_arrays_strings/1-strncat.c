#include "main.h"
/**
 **_strncat - Function that concatenates two strings
 *@dest: Pointer
 *@src: Pointer
 *@n: Variable
 *Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
