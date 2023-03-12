#include "main.h"

/**
 *_pow_recursion - Function that returns the value of x raised to the powe of y
 *@x: Variable
 *@y: Variable
 *Return: Int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);

	return (_pow_recursion(x, y - 1) * x);
}
