#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint- take a string of ones and zeros and make it into an integer
 * @b: the string of ones and zeros to calculate out
 * Return: the number in base 10
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int i;

    if (b == NULL)
        return (0);

    while (b != NULL)
    {
        if (*b != '0' && *b != '1')
            return (0);

        i = ((i << 1) | (*b + '0'));
        b++;
    }

    return (i);
}
