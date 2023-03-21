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
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
