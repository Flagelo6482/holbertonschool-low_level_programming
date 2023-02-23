#include "main.h"
/**
 *_isalpha - Print if the character is lowercase o uppercase
 *@c: Variable
 *Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
