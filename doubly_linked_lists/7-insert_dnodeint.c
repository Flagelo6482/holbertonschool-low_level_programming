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
	dlistint_t *nuevo, *tmp1, *tmp2;

	nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	tmp1 = *h;
	if (idx == 0)
	{
		nuevo->next = tmp1;
		tmp1->prev = nuevo;
		*h = nuevo;
	}
	else
	{
		while (idx != 1)
		{
			if (!tmp1)
			{
				*h = nuevo;
				nuevo->prev = NULL;
				nuevo->next = NULL;
				return (nuevo);
			}
			tmp1 = tmp1->next;
			idx--;
		}
		if (!tmp1->next)
		{
			tmp1->next = nuevo;
			nuevo->prev = tmp1;
			nuevo->next = NULL;
			return (nuevo);
		}
		tmp2 = tmp1->next;

		tmp1->next = nuevo;
		tmp2->prev = nuevo;

		nuevo->prev = tmp1;
		nuevo->next = tmp2;
	}
	return (nuevo);
}
