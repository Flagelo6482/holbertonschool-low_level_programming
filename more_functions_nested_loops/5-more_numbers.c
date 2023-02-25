#include "main.h"
/**
 *more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 *Return: Nothing
 */
void more_numbers(void)
{
	int c, a, mod, div;

	for (a = 1; a <= 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			mod = c % 10; /*Primer digito*/
			div = c / 10; /*Segundo digito*/

			if (c <= 9)
				_putchar(mod + '0');
			else
			{
				_putchar(div + '0');
				_putchar(mod + '0');
			}
		}
		_putchar(10);
	}
}
