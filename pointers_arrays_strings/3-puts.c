#include "main.h"
/**
 *_puts - Print a string to stdout
 *@str: Pointer
 *Return: Nothing
 */
void _puts(char *str)
{
	int x;

	/**
	 *x = 0;

	 *while (str[x] != '\0')
	 *{
	 *_putchar(str[x]);
	 *x++;
	 *}
	 */

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar(10);
}
