#include <stdio.h>

/**
 * main - Ejecutaremos un programa que imprima
 *        "0123456789abcdef"
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
