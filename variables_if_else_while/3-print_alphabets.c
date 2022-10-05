#include <stdio.h>

/**
 * main - Ejecutarmos el abecedario en
 *        minusculas y mayusculas.
 * Return: Retornaremos 0.
 */
int main(void)
{
	int mh;
	int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar (ch);
	for (mh = 'A'; mh <= 'Z'; mh++)
		putchar (mh);
	putchar ('\n');
        return (0);
}
