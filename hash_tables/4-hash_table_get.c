#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 *
 *@ht: Hash table
 *@key: Char
 *
 *Return: Value the "value"
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp->value == NULL)
	{
		tmp->value = "(null)";
		return (tmp->value);
	}

	else
		return (tmp->value);
}
