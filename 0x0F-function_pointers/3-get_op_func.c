#include "3-calc.h"

/**
 * get_op_func - function returns a pointer to the function that 
 * corresponds to the operator given as a parameter.
 * @s: operator given by user
 * @Return: pointer to fxn that corresponds to operator given as param
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;

	k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}

	return (NULL);
}
