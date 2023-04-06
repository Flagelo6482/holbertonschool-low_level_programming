#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Function that returns the number of elements
 *            linked list
 *@h: Pointer to struct
 *
 *Return: Number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		if (h->str != NULL)
			count++;

		h = h->next;
	}

	return (count);
}
