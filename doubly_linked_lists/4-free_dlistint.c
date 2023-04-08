#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Function that frees a list
 *
 *@head:  Pointer to list
 *
 *Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
