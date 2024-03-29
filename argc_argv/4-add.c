#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - Program that adds positive numbers
 *@argc: Arguments count
 *@argv: Arguments print
 *
 *Return: Int
 */

int main(int argc, char *argv[])
{
	int n, d, sum;

	sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
