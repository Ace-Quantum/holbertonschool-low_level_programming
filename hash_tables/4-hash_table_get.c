#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int hash_key;
    hash_node_t* temp_node;

    hash_key = key_index(key, ht->size);

    temp_node = ht->array[hash_key];

    return (temp_node->value)
}