#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @a: return 1 or 0
 * return: 1 or 0
 */

int print_last_digit(int a)
{
	int re;

	if (a > 0)
	{
		re = a % 10;
		return (re);
	}
	else if (a < 0)
	{
		re = (a * -1) % 10;
		return (re);
	}
	else
	{
		return (a);
	}
}
