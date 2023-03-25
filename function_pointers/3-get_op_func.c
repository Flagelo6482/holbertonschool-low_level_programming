#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Contains the function that selects the correct
 *               function to perform the operation
 *@s: Pointer
 *
 *Return: A pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int , int)
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

	
}
