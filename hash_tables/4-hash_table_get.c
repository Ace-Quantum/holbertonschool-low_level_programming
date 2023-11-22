#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int hash_key;
    hash_node_t* temp_node;
    /**int i = 0;**/

    if (!ht || !key)
        return(NULL);

    hash_key = key_index((const unsigned char *)key, ht->size);

    temp_node = ht->array[hash_key];

    /**printf("key: %s, val: %s\n", temp_node->key, temp_node->value);**/

    while (temp_node != NULL)
    {
        /**printf("%d iteration: key: %s, val %s\n", i, temp_node->key, temp_node->value);
        i++;**/
        if (strcmp(temp_node->key, key) == 0)
            return (temp_node->value);

        temp_node = temp_node->next;
    }

    return (NULL);
}