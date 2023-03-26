#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters
 *
 *@n: Const unsigned int
 *
 *Return: Sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);

	va_end(parameters);

	return (sum);
}
