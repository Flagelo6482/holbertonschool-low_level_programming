#include <stdio.h>
#include "main.h"

/**
 *main - Program that prints its name, followed by a new line
 *@argc: Parameter Count
 *@argv: Array argument
 *
 *Return: Argv
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
