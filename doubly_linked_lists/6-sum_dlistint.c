#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a list
 *
 *@head: Pointer to list
 *
 *Return: Sum of all the data list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *tmp = head;

	if (tmp == NULL)
		return (0);

	else
	{
		sum += tmp->n;
		tmp = tmp->next;

		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}

	return (sum);
}
