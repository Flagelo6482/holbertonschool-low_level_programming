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
	unsigned int i, *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; p[i] ; i++)
		p[i] = 0;

	return (p);
}
