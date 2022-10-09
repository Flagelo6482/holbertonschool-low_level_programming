#include "main.h"
#include <stdio.h>

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @a: valor absoluto
 * Return: Valores enteros
 */

int _abs(int a)
{

	if (a >= 0)
	{
		if (a > 0)
		{
			return (a * 1);
		}
		else
		{
			return (a * 0);
		}
	}
	else if (a <= 0)
	{
		if (a < 0)
		{
			return (a * -1);
		}
		else
		{
			return (a * 0);
		}
	}
	return (0);

}
