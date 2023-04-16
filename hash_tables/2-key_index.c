#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 *@key: Char
 *@size: Size of the array
 *
 *Return: Index at which the kay/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
