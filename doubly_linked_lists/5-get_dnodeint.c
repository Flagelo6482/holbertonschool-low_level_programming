#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the n node of a list
 *
 *@head: Point to list
 *@index: Node index
 *
 *Return: Named node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	dlistint_t *tmp = head;

	while (i <= index)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		i++;
	}

	return (tmp);
}
