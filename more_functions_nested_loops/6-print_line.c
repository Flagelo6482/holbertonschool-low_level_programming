#include "main.h"
/**
 *print_line - Draws a straight line in the terminal
 *@n: Variable
 *Return: Nothing
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
		_putchar(10);
	}
}
