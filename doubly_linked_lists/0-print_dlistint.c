#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - Function that prints all the elements of a list
 *
 *@h: Pointer to header
 *
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
