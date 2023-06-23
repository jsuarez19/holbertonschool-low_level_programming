#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * more_nomberts - Prints the numbers from 0 to 14, 10 times
 *
 * Return: void on success
 *
 */

void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			a = j / 10;
			b = j % 10;

			if(j > 9)
				_putchar(a + '0');
			_putchar(b + '0');
		}

	_putchar('\n');
	}
}
