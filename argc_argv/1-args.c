#include <stdio.h>
#include "main.h"

/**
 *main - Program that prints the number of arguments passed into it
 *@argc: Argument count
 *@argv: Argument unused
 *
 *Return: Int
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
