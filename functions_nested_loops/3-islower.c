#include "main.h"
/**
 *_islower - Print 1 or 0
 *@c: Variable
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
