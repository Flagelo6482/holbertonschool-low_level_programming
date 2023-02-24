#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - function that prints all natural numbers from n to 98
 *@n: First variable
 *Return: Always 0
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n >= 0 && n < 99)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	printf("\n");
}
