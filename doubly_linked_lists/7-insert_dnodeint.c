#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Funciton that inserts a new node
 *@h: Pointer to list
 *@idx: Index
 *@n: Data int
 *Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevo, *tmp = *h;

	nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	nuevo->n = n;
	nuevo->prev = tmp;
	nuevo->next = tmp->next;
	tmp->next->prev = nuevo;
	tmp->next = nuevo;

	return (nuevo);
}
