#include "main.h"
/**
 *print_rev - Print a string in reverse, followed by a new line
 *@s: Pointer
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	len = len - 1;

	while (s[len] >= 0)
	{
		_putchar(s[len--]);
	}
	_putchar(10);
}
