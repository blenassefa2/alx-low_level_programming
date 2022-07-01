#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table we will print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int s = 0;
	hash_node_t *curr;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		curr  = ht->array[i];

		while (curr)
		{
			if (s == 1)
				printf(", ");

			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
			s = 1;
		}
	}
	printf("}\n");
}
