#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Function that creates a hash table
 *
 *@size: Parameter
 *
 *Return: Hash table address
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nuevo = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (nuevo == NULL)
		return (NULL);

	nuevo->size = size;
	nuevo->array = malloc(sizeof(hash_node_t *) * size);

	if (nuevo->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		nuevo->array[i] = NULL;

	return (nuevo);
}
