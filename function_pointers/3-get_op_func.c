#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int a, int b)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i;

    i = 5;

    while (i >= 0)
    {
        if ((s = ops[0][i]) || (ops[0][i] = NULL))
            result = ops([2][i](a, b));
        i--
    }
}