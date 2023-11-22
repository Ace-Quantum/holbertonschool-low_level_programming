#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table
 * @size: the size of the hash table
 *
 * Return: the newly created table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
