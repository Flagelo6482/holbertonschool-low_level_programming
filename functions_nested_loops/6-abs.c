#include "main.h"
/**
 *_abs - Print ABS of a number
 *@c: Type whole
 *Return: Always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;

		return (val);
	}
	return (c);
}
