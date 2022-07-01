#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the element whose index we are looking
 * @size: size of the array of hash table
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
