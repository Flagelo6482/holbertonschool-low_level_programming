#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Funciton that inserts a new node at a
 *                            given position
 *@h: Pointer to list
 *@idx: Index
 *@n: Data int
 *
 *Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevo = NULL;
	dlistint_t *tmp_1 = *h;
	dlistint_t *tmp_2 = NULL;

	nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);

	nuevo->prev = NULL;
	nuevo->n = n;
	nuevo->next = NULL;

	while (idx != 1)
	{
		tmp_1 = tmp_1->next;

		if (!tmp_1)
			return (NULL);

		idx--;
	}
	if (!tmp_1)
	{
		*h = nuevo;
		nuevo->prev = tmp_1;
		nuevo->next = NULL;
	}
	else
	{
		tmp_2 = tmp_1->next;

		tmp_1->next = nuevo;
		tmp_2->prev = nuevo;

		nuevo->next = tmp_2;
		nuevo->prev = tmp_1;
	}
	return (nuevo);

}
