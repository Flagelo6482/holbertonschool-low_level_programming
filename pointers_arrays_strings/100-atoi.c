#include "main.h"

/**
 *_atoi - Function that convert a string to an integer
 *@s: Pointer
 *
 *Return: Char
 */

int _atoi(char *s)
{
	int x;
	unsigned int n;

	x = 1;
	n = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * x);
}
