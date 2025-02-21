#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: the correct function
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

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
