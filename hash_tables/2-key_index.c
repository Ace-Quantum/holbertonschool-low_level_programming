#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gets an index from a key
 * @key: the key to get the index from
 * @size: the size of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
