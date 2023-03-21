#ifndef DOG_H
#define DOG_H

/**
 *struct dog - New type of structure
 *@name: Char
 *@age: Float
 *@owner: char
 *
 *Return: Nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
