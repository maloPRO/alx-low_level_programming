#include "hash_tables.h"

/**
* hash_table_delete - deletes item
* @ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
