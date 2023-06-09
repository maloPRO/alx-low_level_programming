#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = 0;
	}

	return (hash_table);
}
