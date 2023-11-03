#include "hash_tables.h"


/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table or NULL
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned long int idx = 0;

	if (size <= 0)
		return (NULL);


	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
	{
		free(tab->array);
		return (NULL);
	}

	while (idx < size)
	{
		tab->array[idx] = NULL;
		idx++;
	}
	return (tab);
}
