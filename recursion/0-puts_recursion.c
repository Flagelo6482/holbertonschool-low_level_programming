#include "main.h"
/**
 *_puts_recursion - Function that prints a string
 *@s: Pointer
 *Return: Char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
