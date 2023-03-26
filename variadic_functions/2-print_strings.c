#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line
 *
 *@separator: Char pointer
 *@n: Const unsigned int
 *
 *Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;
	char *name;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(parameters, char *);

		if (name == NULL)
			printf("(nil)");
		else
			printf("%s", name);

		if (i == n - 1)
			break;

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
