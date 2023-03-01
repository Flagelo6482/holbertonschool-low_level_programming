#include "main.h"
/**
 *swap_int - Swaps the values of two integers
 *@a: Var pointer
 *@b: Var pointer
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
