#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
    int (*process_nums)(int, int);

    process_nums = get_op_func(argv[2]);

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
    else if (((argv[2] = "/") || (argv[2] = "%")) && atoi((argv[3]) = 0))
    {
        printf("Error100\n");
        exit(100);
    }
    else
    {
        printf("%d\n", process_nums(atoi(argv[2]), atoi(argv[3])));
        return (0);
    }
}