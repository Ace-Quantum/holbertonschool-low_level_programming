#include <stdio.h>
#include "main.h"

/**
 * get_bit- gets a bit
 * @index: the reference in the array
 * @n: the number we're seeing as a set of bits?
 * Return: 1 on success, -1 for errors
*/
int get_bit(unsigned long int n, unsigned int index)
{
    if (index > sizeof(unsigned long int) * 8)
        return (-1);

    return (n >> index & 1);
}