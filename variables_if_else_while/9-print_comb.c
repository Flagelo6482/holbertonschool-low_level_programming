#include <stdio.h>

/**
 * main - Ejecutaremos numeros seguidos de "," y " ".
 * Return: 0.
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
