#include <stdio.h>
/**
 *main - Print the alphabet in reverse
 *
 *Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
