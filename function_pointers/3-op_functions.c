#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Sum of a and b
 *@a: Int
 *@b: Int
 *Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of a and b
 *@a: Int
 *@b: Int
 *Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of a and b
 *@a: Int
 *@b: Int
 *Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of a by b
 *@a: Int
 *@b: Int
 *Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The remainder of the division of a by b
 *@a: Int
 *@b: Int
 *Return: Remainder of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
