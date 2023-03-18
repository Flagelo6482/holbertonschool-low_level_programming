#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - Function that allocates memory for an array, using malloc
 *@nmemb: Elements
 *@size: Size
 *
 *Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	x = p;

	for (i = 0; i < (nmemb * size); i++)
		x[i] = '\0';

	return (p);
}
