#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: Task 4
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
