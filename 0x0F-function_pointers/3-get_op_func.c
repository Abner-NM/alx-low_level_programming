#include "3-calc.h"

/**
 * get_op_func - a pointer to a simple operation function
 * @s: selected operator
 *
 * Return: Result of operations
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
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
