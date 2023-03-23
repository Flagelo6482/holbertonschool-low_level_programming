#include "function_pointers.h"

/**
 *print_name - Function that prints a name
 *@name: Pointer
 *@f: Pointer to function
 *
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return (NULL);
	
	(*f)(name);
}
