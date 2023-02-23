#include "main.h"
/**
 *print_last_digit - Print las digit
 *@q: Variable
 *Return: Las digit
 */
int print_last_digit(int q)
{
	int last;

	last = q % 10;

	if (q < 0)
	{
		last = last * -1;

	}

	_putchar(last + '0');

	return (last);
}
