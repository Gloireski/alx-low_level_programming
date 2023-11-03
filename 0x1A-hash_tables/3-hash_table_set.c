#include "hash_tables.h"


/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key, can not be an empty string
 * @value: is the value associated with the key, not empt, can be dup
 *
 * Return: 1 if it succeeded, 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	char *value_cpy;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);


	idx = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_cpy;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
