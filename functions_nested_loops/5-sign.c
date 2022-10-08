#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: Prints the sign of a number.
 * Return: 1 print if +, 0 print if n 0 and -1 print if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
}
