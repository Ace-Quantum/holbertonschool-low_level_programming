#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tracker_node;
    hash_node_t *temp_node;
    unsigned long int i = 0;

    while (i < ht->size)
    {
        if (ht->array[i] != NULL)
        {
            temp_node = ht->array[i];
            while (temp_node != NULL)
            {
                tracker_node = temp_node->next;
                free(temp_node->key);
                free(temp_node->value);
                free(temp_node);
                temp_node = tracker_node;
            }
        }
        i++;
    }
    free(ht);
}
