#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table
 * @ht: hash table
 * @key: key
 *
 * Return: the value if works, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long i;
	hash_node_t *curr;

	if (strcmp(key, "") == 0 || !ht || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[i];
	if (curr == NULL)
		return (NULL);

	while (strcmp(curr->key, key) && curr)
		curr = curr->next;

	if (!curr)
		return (NULL);
	return (curr->value);
}
