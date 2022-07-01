#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int a, b, c;

    ht = hash_table_create(1024);
    a = hash_table_set(ht, "betty", "cool");
    b = hash_table_set(ht, "hetairas", "betty");
    c = hash_table_set(ht, "mentioner", "betty");
    printf("a-> %i, b-> %i, c-> %i\n", a, b, c);
    return (EXIT_SUCCESS);
}