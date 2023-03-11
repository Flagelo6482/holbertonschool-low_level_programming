#include "main.h"

/**
 *print_chessboard - Function that prints the chessboard
 *@a: Pointer
 *Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, x;

	i = 0;

	while (i < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[i][x]);
			x++;
		}
		_putchar(10);
		i++;
	}
}
