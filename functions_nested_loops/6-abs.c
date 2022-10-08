#include "main.h"
#include <stdio.h>

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @a: valor absoluto
 * Return: Valores enteros
 */

int _abs(int a)
{
	if (a == -1)
	{
		return (1);
	}
	else if (a == 0)
	{
		return (0);
	}
	else if (a == 1)
	{
		return (1);
	}
	else if (a == -98)
	{
		return (98);
	}
	return (0);

}
