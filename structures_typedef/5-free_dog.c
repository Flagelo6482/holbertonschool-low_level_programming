#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Function that frees dogs
 *
 *Return: Nothing
 */

void free_dog(dog_t *d)
{
	if(d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
