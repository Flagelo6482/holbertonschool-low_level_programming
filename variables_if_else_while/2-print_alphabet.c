#include <stdio.h>

/**
 *main - Print the alphabet in lowercase
 *Description: Using the main function
 *Return - Always 0
 */

int main(void)
{
	int x;

	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
