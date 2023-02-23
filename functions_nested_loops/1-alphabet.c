#include "main.h"
/**
 *print_alphabet - Make the alphabet
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
	char min;

	min = 97;

	/*
	 *while(min <= 122)
	 *{
	 *	_putchar(min);
	 *	min++;
	 *}
	 */
	for (min = 97; min <= 122; min++)
	{
		_putchar(min);
	}
	_putchar(10);
}
