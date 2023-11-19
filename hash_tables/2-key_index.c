#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);

    return (hash % size);
}