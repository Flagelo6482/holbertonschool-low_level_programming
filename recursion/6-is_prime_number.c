#include "main.h"

int _prime(int n, int i);

/**
 *is_prime_number - Function that returns 1 if the input is a prime number
 *@n: Variable
 *Return: Int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, n - 1));
}

/**
 *_prime - Calculates if a number is prime
 *@n: Variable
 *@i: Variable
 *Return: Int
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (_prime(n, i - 1));
}
