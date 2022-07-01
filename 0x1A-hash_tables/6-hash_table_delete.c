#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: the table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{		
		while (ht->array[i])
		{
			curr = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = curr;
		}
	}
	free(ht->array);
	free(ht);
}
