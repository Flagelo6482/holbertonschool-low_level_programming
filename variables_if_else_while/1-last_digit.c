#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Print if the number is positive, zero, o negativo
 *Description: Using the main function
 *Return: Always 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Las digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Las digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Las digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
