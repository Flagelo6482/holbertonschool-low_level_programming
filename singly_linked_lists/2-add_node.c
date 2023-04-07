#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 *
 *@head: Double pointer
 *@str: String to copy
 *
 *Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0, count = 0;

	list_t *nw;
	nw = malloc(sizeof(list_t));

	while (str[i])
	{
		i++;
		count++;
	}

	nw->str = strdup(str);
	nw->next = *head;
	nw->len = count;

	*head = nw;

	if (nw == NULL)
		return (NULL);

	else
		return (nw);
}
