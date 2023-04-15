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
	hash_table_t *nuevo = malloc(sizeof(hash_table_t) * size);

	if (nuevo == NULL)
		return (NULL);

	nuevo->size = size;
	nuevo->array = NULL;

	return (nuevo);
}
