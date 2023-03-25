#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Principal function
 *@argc: Number of arguments
 *@argv: Contains the arguments
 *
 *Return: Print the result of the operation
 */

int main(int argc, char *argv[])
{
	int a, b, calc;
	char *operator;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];


}
