#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program that mutiplies two numbers
 *@argc: Arguments Count
 *@argv: Arguments print
 *
 *Return: Int
 */

int main(int argc, char *argv[])
{
	int i, x, mul;

	mul = 1;
	x = 0;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
		x++;
	}

	if (x < 2)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", mul);

	return (0);
}
