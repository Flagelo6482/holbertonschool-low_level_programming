#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 *                of a list
 *
 *@head: Pointer to list
 *@n: Int
 *
 *Return: Address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo = malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
		return (NULL);

	if (*head == NULL)
	{
		nuevo->prev = NULL;
		nuevo->n = n;
		nuevo->next = NULL;
	}
	else
	{
		nuevo->prev = NULL;
		nuevo->n = n;
		nuevo->next = *head;
		(*head)->prev = nuevo;
	}

	*head = nuevo;

	return (nuevo);
}
