#include <stdio.h>

/**
 * main - Ejecutaremos del 0 al 9
 *        sin usar la funcion printf.
 * Return: Retornamos 0.
 */
int main(void)

{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
