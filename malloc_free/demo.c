#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, n, i;
	char *a;

	n = 10;

	a = malloc(sizeof(a) * 10);

	for(i = 0; i < n; i++)
	{
		p[i] = i + 1;
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}
	putchar(10);
	return(0);
}
