#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Function that returns a pointer to a 2
 *             dimensional array of integers
 *@width: width of six
 *@height: height of four
 *
 *Return: Double Pointer
 */

int **alloc_grid(int width, int height)
{
	int **p, lenw, lenh;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (lenh = 0; lenh < height; lenh++)
	{
		p[lenh] = malloc(sizeof(int) * width);

		if (p[lenh] == NULL)
		{
			while (lenh >= 0)
			{
				free(p[lenh]);
				alto--;
			}
			free(p);
			return (NULL);
		}
	}

	for (lenh = 0; lenh < height; lenh++)
	{
		for (lenw = 0; lenw < width; lenw++)
			p[lenh][lenw] = 0;
	}

	return (p);
}
