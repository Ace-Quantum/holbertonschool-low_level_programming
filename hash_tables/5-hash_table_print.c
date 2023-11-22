#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t* temp_node;
    unsigned long int i;
    int just_for_commas = 0;

    if (ht)
    {
        printf("{");

        for (i = 0; i < ht->size; i++)
        {
            if (ht->array[i] != NULL)
            {
                temp_node = ht->array[i];
                while (temp_node != NULL)
                {
                    if (just_for_commas > 0)
                        printf(", ");
                    printf("'%s': '%s'", temp_node->key, temp_node->value);
                    temp_node = temp_node->next;
                    just_for_commas++;
                }
            }
        }
        printf("}\n");
    }
}
