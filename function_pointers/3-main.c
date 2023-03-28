#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Principal function
 *@argc: Number of arguments
 *@argv: Contains the arguments
 *
 *Return: Print the result of the operation
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *operator;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if ((argv[2][1]) != '\0')
	{
		printf("ERROR\n");
		return (99);
	}

	if ((atoi(operator) == '/' || atoi(operator) == '%') && (b == 0))
	{
		printf("ERROR\n");
		return (100);
	}

	printf("%d\n", (*get_op_func(operator))(a, b));

	return (0);
}
