#include "main.h"
/**
 **_strcpy - Copies the string pointed to by src
 *@dest: Pointer
 *@src: Pointer
 *Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
