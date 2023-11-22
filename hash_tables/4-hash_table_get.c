#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    /**unsigned long int hash_val;**/
    hash_node_t *tracker = ht->array[0];

    /**hash_val = key_index((const unsigned char *)key, ht->size);**/

    printf("key: %s value: %s", tracker->key, tracker->value);


    while (tracker != NULL)
    {
        printf("key: %s value: %s", tracker->key, tracker->value);
        if (tracker->key == key)
            return (tracker->value);
        tracker++;
    }
    return (NULL);
}