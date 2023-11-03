#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 *
 * Return: none
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int idx = 0;

	while (idx < ht->size)
	{
		if (ht->array[idx])
		{
			node = ht->array[idx];
			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
