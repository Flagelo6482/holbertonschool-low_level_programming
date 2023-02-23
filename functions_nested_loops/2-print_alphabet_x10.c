#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet 10 times
 *
 *Return: Void
 */
void print_alphabet_x10(void)
{
	int q;
	char e;

	for (q = 1; q <= 10; q++)
	{
		for (e = 97; e <= 122; e++)
		{
			_putchar(e);
		}
		_putchar(10);
	}
}
