#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Struct type dog
 *@d: Type dog
 *@name: Char
 *@age: Int
 *@owner: Char
 *
 *Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	x = malloc(sizeof(struct dog));

	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;
}
