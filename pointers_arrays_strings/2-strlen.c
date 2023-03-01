#include "main.h"
/**
 *_strlen - Returns the length of an array
 *@s: Pointer
 *Return: Alwys 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
