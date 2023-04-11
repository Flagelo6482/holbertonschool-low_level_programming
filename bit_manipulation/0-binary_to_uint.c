#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an int
 *
 *@b: Pointing to a string
 *
 *Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, pot = 1;
	int len = 0;

	if (*b == '\0')
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		sum += (b[len] - '0') * pot;
		pot *= 2;
	}

	return (sum);
}
