#include "hash_tables.h"

/**
 * free_node - frees a node
 * @node: a hash_node_t to be freed
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->key);
	free(node);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key of new element
 * @value: value of the new element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *curr;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = new;
	else
	{
		curr = ht->array[i];
		if (strcmp(curr->key, key) == 0)
		{
			new->next = curr->next;
			ht->array[i] = new;
			return (1);
		}
		while (curr->next != NULL && strcmp(curr->next->key, key) != 0)
			curr = curr->next;
		if (strcmp(curr->key, key) == 0)
		{
			new->next = curr->next->next;
			curr->next = new;
		}
		else
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	return (1);
}
