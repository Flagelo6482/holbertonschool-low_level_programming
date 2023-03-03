#include "main.h"
/**
 *puts_half - Prints half of a string, followed by a new line
 *@str: Pointer
 */
void puts_half(char *str)
{
	int len, mitad;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		mitad = len / 2;

		while (str[mitad])
		{
			_putchar(str[mitad]);
			mitad++;
		}
	}

	else
	{
		mitad = (len - 1) / 2;

		while (str[mitad])
		{
			_putchar(str[mitad]);
			mitad++;
		}
	}
	_putchar(10);
}
