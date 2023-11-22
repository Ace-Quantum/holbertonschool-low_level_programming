#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t* temp_node;
    unsigned long int i;

    for (i = 0; i <= ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            temp_node = ht->array[i];
            while (temp_node != NULL)
            {
                printf("'%s': '%s', ", temp_node->key, temp_node->value);
                temp_node = temp_node->next;
            }
        }
    }
}
