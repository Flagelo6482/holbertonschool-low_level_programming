#include <stdio.h>

/**
 * main - Ejecutaremos el abecedario
 *        con condiciones, que no aparezcan
 *        "q" y "e".
 * Return: Retornaremos 0.
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar ('\n');
	return (0);
}
