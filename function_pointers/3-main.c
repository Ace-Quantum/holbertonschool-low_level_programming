#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
    int i, result, a, b;

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if (argc > 3)
    {
        printf("Error\n");
        exit(98);
    }
    else if (strlen(argc[2]) > 1)
    {
        printf("Error\n");
        exit(99);
    }
    else if ((argc[2] = "/") || (argc[2] = "%") && (b = 0))
    {
        printf("Error\n");
        exit(100);
    }
    else
    {
        result = get_op_func(argc[2])(a, b);
        printf ("%i", result);
        return;
    }
}