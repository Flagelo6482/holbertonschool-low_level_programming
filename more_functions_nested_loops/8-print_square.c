#include "main.h"
/**
 *print_square - Write a function that prints a square, followed by a new line.
 *@size: Variable
 *Return: Nothing
 */
void print_square(int size)
{
	int q, e;

	if (size <= 0)
		_putchar(10);

	for (q = 1; q <= size; q++)
	{
		for (e = 1; e <= size; e++)
			_putchar('#');

		_putchar(10);
	}
}
