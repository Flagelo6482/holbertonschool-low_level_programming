#include "main.h"
/**
 *jack_bauer - Print every minute of the day
 *
 *Return: Nothing
 */
void jack_bauer(void)
{
	int q, e;

	for (q = 0; q < 24; q++)
	{
		for (e = 0; e < 60; e++)
		{
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
			_putchar(58);
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
			_putchar(10);
		}
	}
}
