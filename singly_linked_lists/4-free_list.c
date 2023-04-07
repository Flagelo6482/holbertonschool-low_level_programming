#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 *
 *@head: Pointer to list
 *
 *Return: Void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
