#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t* new_node;
    hash_node_t* temp = NULL;

    index = key_index((const unsigned char *)key, ht->size);

    new_node = (hash_node_t*) malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = (char*) malloc(strlen(value) + 1);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    
    new_node->value = (char*) malloc(strlen(value) + 1);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }
    
    strcpy(new_node->key, key);
    strcpy(new_node->value, value);

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
        return (1);
    }
    else if (strcmp(ht->array[index]->key, key) == 0)
    {
        temp = ht->array[index];
        new_node->next = ht->array[index]->next;
        ht->array[index] = new_node;
        free(temp->key);
        free(temp->value);
        free(temp);
        return (1);
    }

    temp = ht->array[index];
    new_node->next = temp;
    ht->array[index] = new_node;
    return (1);
}
