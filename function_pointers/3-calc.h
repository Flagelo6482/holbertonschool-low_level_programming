#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 *@op: Operator
 *@f: Function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /*struct*/
