#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, x;

	x = 0;

	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		//x += argv[i];
	}

	//printf("x: %d\n", x);

	return (0);
}
