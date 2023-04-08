#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - Function that adds a new node at the end of a list
 *
 *@head: Point to list
 *@n: Int
 *
 *Return: Address new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo, *tmp;

	nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);

	if (*head == NULL)
	{
		nuevo->prev = NULL;
		nuevo->n = n;
		nuevo->next = NULL;

		*head = nuevo;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		nuevo->prev = tmp;
		nuevo->n = n;
		nuevo->next = NULL;
		tmp->next = nuevo;
	}

	return (nuevo);
}
