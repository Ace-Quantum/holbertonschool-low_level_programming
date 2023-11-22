#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tracker_node;
    hash_node_t *temp_node;
    unsigned long int i = 0;

    if (ht)
    {
        while (i < ht->size)
        {
            if (ht->array[i] != NULL)
            {
                temp_node = ht->array[i];
                while (temp_node != NULL)
                {
                    temp_node = temp_node->next;
                    free(ht->array[i]->key);
                    free(ht->array[i]->value);
                    free(ht->array[i]);
                    ht->array[i] = temp_node;
                }
            }
            i++;
        }
        free(ht->array);
        free(ht);
    }
}
