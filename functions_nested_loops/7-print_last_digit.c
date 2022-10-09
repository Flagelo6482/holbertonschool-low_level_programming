#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @a: return 1 or 0
 * return: 1 or 0
 */

int print_last_digit(int a)
{

	if (a >= 0)
	{
		if (a > 0)
		{
			return ((a * 1) % 10);
		}
		else
		{
			return ((a * 0) % 10);
		}
	}
	else if (a <= 0)
	{
		if (a < 0)
		{
			return ((a * -1) % 10);
		}
		else
		{
			return ((a * 0) % 10);
		}
	}
	return (0);
}
