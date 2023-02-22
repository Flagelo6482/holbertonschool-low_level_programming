#include <stdio.h>
/**
 *main - Print the alphabet in lowercase and uppercase
 *
 *Return: Always 0
 */
int main(void)
{
	char q, e;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}
	for (e = 'A'; e <= 'Z'; e++)
	{
		putchar(e);
	}

	putchar('\n');

	return (0);
}
