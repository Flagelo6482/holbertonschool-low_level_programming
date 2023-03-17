#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - Function that allocates memory using malloc
 *@b: Unsigned int
 *
 *Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (p == NULL)
		exit(98);

	return (p);
}
