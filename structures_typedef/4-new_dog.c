#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - Returns the length of a string
 *@s: Pointer
 *
 *Return: Length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *_strcpy - Copy one string to another
 *@dest: Char pointer
 *@src: Char pointer
 *
 *Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while(src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 *new_dog - Create a new dog
 *@name: Char pointer
 *@age: Float
 *@owner: Char pointer
 *
 *Return: Dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *coco;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	coco = malloc(sizeof(dog_t));
	if (coco == NULL)
		return (NULL);

	coco->name = malloc(sizeof(char) * (len1 + 1));
	if (coco->name == NULL)
	{
		free(coco);
		return (NULL);
	}

	coco->owner = malloc(sizeof(char) * (len2 + 1));
	if (coco->owner == NULL)
	{
		free(coco);
		free(coco->name);
		return (NULL);
	}
	_strcpy(coco->name, name);
	_strcpy(coco->owner, owner);
	coco->age = age;

	return (coco);
}
