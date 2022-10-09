#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @a: return 1 or 0
 * return: 1 or 0
 */

int print_last_digit(int a)
{
	int mo;

	if (a >= 0)
	{
		mo = a % 10;
		_putchar('0' + mo);
		return (mo);
	}
	else
	{
		mo = a % 10;
		_putchar('0' + (mo * -1));
		return (mo);
	}
}
