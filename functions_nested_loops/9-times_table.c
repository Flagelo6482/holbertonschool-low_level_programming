#include "main.h"
/**
 *times_table - Print table the 9
 *
 *Return: Nothing
 */
void times_table(void)
{
	char c, f, r;

	for (f = 0; f < 10; f++)
	{
		_putchar('0');

		for (c = 1; c < 10; c++)
		{
			_putchar(',');
			_putchar(' ');

			r = f * c;

			if (r < 10)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
		_putchar(10);
	}
}
