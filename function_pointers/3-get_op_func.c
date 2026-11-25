#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function for the operation.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding to the selected operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
