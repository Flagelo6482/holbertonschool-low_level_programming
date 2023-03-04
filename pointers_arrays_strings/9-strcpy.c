#include "main.h"
/**
 **_strcpy - Copies the string pointed to by src
 *@dest: Pointer
 *@src: Pointer
 *Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
