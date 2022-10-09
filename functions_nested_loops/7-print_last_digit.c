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
	int mo;

	if (a >= 0)
	{
		if (a > 0)
		{
			re = a % 10;
			return (re);
		}
		else
		{
			re = a % 10;
			return (re);
		}
	}
	else if (a <= 0)
	{
		if (a < 0)
		{
			re = a % 10;
			mo = re * -1;
			return (mo);
		}
		else
		{
			re = a % 10;
			mo = re * -1;
			return (mo);
		}
	}

	return (0);
}
