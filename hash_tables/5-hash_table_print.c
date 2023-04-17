#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints a hash table
 *@ht: Pointer to hash table
 *
 *Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	unsigned char flag = 0;

	printf("{");

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
					printf(", ");

				tmp = ht->array[i];

				while (tmp != NULL)
				{
					printf("'%s: '%s'", tmp->key, tmp->value);
					tmp = tmp->next;

					if (tmp != NULL)
						printf(", ");
				}
				flag = 1;
			}
		}
		printf("}\n");
	}
	printf("}\n");
}
