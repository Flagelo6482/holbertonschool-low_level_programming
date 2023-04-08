#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - Function that returns the number of elements in a linked list
 *
 *@h: Pointer to list
 *
 *Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
