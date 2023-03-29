#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 *@format: Const char *
 *
 *Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list(param);
	int i = 0;
	char *str, *space;

	va_start(param, format);

	if (format)
	{
		while (format)
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", space, va_arg(param, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(param, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(param, double));
				break;
			case 's':
				str = va_arg(param, char *);
				if (!str)
					str = "(nil)";

				printf("%s%s", space, str);
				break;
			default:
				i++;
				continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(param);
}
