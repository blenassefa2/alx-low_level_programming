#include "hash_tables.sh"
/**
 * shash_table_create - create shash table
 * @size: the size of the hash table
 *
 * Return: a pointer to newly created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
/**
 * shash_table_set - adds element to the hash table
 * @ht: pointer to the table
 * @key: key of new element
 * @value: value of the new element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *new, *curr;

	if (strcmp(key, "") == 0 || !key || !ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->snext = NULL;
	new->sprev = NULL;
	new->next = NULL;

	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->head->key, key) > 0)
	{
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		curr = ht->shead;
		while (curr->next && strcmp(curr->snext->key, key) < 0)
			curr = curr->next;
		new->sprev = curr;
		new->snext = curr->snext;
		if (!curr->snext)
			ht->stail = new;
		else
			curr->snext->sprev = new
	}
	return (1);
}
/**
 * shash_table_get - get a value from the table
 * @ht: the table
 * @key: key
 * Return: the value if it works, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *curr;

	if (strcmp(key, "") == 0 || !ht || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[i];
	if (curr == NULL)
		return (NULL);
	while (strcmp(curr->key, key) && curr)
		curr = cur->next;

	if (!curr)
		return (NULL);
	return (curr->value);
}
/**
 * shash_table_print - prints a hash table
 * @ht: pointer to hash table to be printed
 */
void shash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int s = 0;
	shash_node_t *curr;

	if (!ht)
		return;

	putchar('{');

	curr = ht->shead;

	while (curr)
	{
		if (s == 1)
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
		s = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a hash table
 * @ht: pointer to hash table to be printed
 */
void shash_table_print_rev(const hash_table_t *ht)
{
	unsigned long int i;
	int s = 0;
	shash_node_t *curr;

	if (!ht)
		return;

	putchar('{');

	curr = ht->stail;

	while (curr)
	{
		if (s == 1)
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		s = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes hash table
 * @ht: the table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *temp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->arrai[i];
		while (curr)
		{
			temp = curr->next;
			free(curr->key);
			free(curr->value);
			curr->next = NULL;
			free(curr);
			curr = temp;
		}
	}
	free(ht->array);
	free(ht);
}
