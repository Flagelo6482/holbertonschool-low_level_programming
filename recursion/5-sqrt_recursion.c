#include "main.h"

int x_sqrt_recursion(int n, int i);

/**
 *_sqrt_recursion - Function that returns the natural square root of a number
 *@n: Variable
 *Return: Int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (x_sqrt_recursion(n, 0));
}


/**
 *x_sqrt_recursion - Recurses to find the natural
 *@n: Variable
 *@i: Variable
 *Return: Int
 */

int x_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (x_sqrt_recursion(n, i + 1));
}
