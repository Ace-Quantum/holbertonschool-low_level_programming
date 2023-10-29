#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int result;

    i = 5;

    while (i >= 0)
    {
        if (strcmp(s, ops[i].op)== 0)
            result = (ops[i].f);
        i--
    }
}