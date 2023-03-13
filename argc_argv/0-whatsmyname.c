#include <stdio.h>
#include "main.h"

/**
 *Program that prints its name, followed by a new line
 *
 *Return: Argv
 */

int main(int argc, char * argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
