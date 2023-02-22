#include "main.h"
/**
 *main - Entry point
 *@c: Print character for character
 *Return: Always 0
 */
int main(void)
{
	int x;

	char nombre[]="_putchar";

	for (x = 0; x <= 8; x++)
	{
		_putchar(nombre[x]);
	}
	_putchar(10);

	return (0);
}
