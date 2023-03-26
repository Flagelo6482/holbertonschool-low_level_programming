#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *
 *@separator: Char
 *@n: Unsigned Int
 *
 *Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters, int));

		if (i == n - 1)
		{
			break;
		}

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
