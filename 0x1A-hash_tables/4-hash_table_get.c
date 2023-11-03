#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to get the value
 *
 * Return: value with the key or NULL if not found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
