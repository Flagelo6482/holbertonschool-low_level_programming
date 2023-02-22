#include <stdio.h>
/**
 *main - Print all the numbers of base 16 in lowercase
 *
 *Return: Always 0
 */
int main(void)
{
	int x, q;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (q = 'a'; q <= 'f'; q++)
	{
		putchar(q);
	}

	putchar('\n');

	return (0);
}
