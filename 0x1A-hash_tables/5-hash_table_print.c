#include "hash_tables.h"

/**
* hash_table_print - prints table
* @ht: hash table
* Return: table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	int is_first;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	is_first = 1;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (!is_first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", curr->key, curr->value);
			is_first = 0;

			curr = curr->next;
		}
	}
	printf("}\n");
}
