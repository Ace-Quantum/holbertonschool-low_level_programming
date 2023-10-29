#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
    int (*process_nums)(int, int);

    oprt = get_op_func(argv[2]);

    if (argc != 4)
    {
        printf("Error98\n");
        exit(98);
    }
    else if (!process_nums)
    {
        printf("Error99\n");
        exit(99);
    }
    else if (((argv[2] = "/") || (argv[2] = "%")) && (b = 0))
    {
        printf("Error100\n");
        exit(100);
    }
    else
    {
        result = get_op_func(atoi(argv[2]), atoi(argv[3]));
        printf ("%i", result);
        return (0);
    }
}