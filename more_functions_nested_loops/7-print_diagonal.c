#include "main.h"
/**
 *print_diagonal - Prints the number of times a slash with spaces
 *@n: Variable
 *Return: Nothing
 */
void print_diagonal(int n)
{
	int x, e;

	if (n <= 0)
		_putchar(10);

	for (x = 1; x <= n; x++)
	{
		e = x - 1;

		while (e != 0)
		{
			_putchar(' ');
			e--;
		}

		_putchar(92);
		_putchar(10);
	}
}
