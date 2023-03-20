#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Random password generator
 *
 *Return: Always 0
 */

int main(void)
{
	int i, sum, d1, d2;
	char pass[84];

	i = 0;
	sum = 0;

	while (sum < 2772)
	{
		pass[i] = 33 + rand() % 94;
		sum += pass[i++];
	}

	pass[i] = '\0';

	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			d1++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + d1))
			{
				pass[i] -= d1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + d2))
			{
				pass[i] -= d2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
