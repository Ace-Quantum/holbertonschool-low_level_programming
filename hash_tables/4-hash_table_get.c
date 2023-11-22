#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    /**unsigned long int hash_val;**/
    hash_node_t *tracker = ht->*array;

    /**hash_val = key_index((const unsigned char *)key, ht->size);**/

    while (*tracker)
    {
        if (tracker->key == key)
            return (tracker->value);
        *tracker++;
    }
}