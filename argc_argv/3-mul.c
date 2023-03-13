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
	int i, mul;

	mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}

	if (i == 1)
	{
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
