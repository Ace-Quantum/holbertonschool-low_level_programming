#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int hash_key;
    hash_node_t* temp_node;

    hash_key = key_index((const unsigned char *)key, ht->size);

    temp_node = ht->array[hash_key];

    printf("key: %s, val: %s", temp_node->key, temp_node->value);
    
    while (temp_node != NULL)
    {
        if (temp_node->key == key)
            return (temp_node->value);
        temp_node = temp_node->next;
    }

    return (NULL);
}