#include <stdio.h>

/**
 * main - Ejecutaremos el abecedario al revez.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);
}
