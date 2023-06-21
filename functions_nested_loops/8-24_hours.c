#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - Prints every minute of a day
 *
 * Return: void on success
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (!(i == 2 && j > 3))
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 10; l++)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
