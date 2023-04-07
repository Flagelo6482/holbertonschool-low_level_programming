#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list
 *
 *@head: Pointer to list
 *@str: String to copy
 *
 *Return: List address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *new, *tmp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[count])
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new;
	}

	return (new);
}
