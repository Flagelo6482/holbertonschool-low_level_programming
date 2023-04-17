#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *@ht: Hash table
 *@key: Char
 *@value: Char
 *Return: 1 succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nuevo;
	char *value_cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);

	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	nuevo = malloc(sizeof(hash_node_t));

	if (nuevo == NULL)
		return (0);

	nuevo->key = strdup(key);

	if (nuevo->key == NULL)
		return (0);

	nuevo->value = value_cp;
	nuevo->next = ht->array[index];
	ht->array[index] = nuevo;

	return (1);
}
