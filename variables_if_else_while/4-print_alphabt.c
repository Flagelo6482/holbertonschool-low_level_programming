#include <stdio.h>
/**
 *main - Print the alphabet, except the characters 'q' and 'e'
 *
 *Return: Always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
